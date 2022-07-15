// memasukan library
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

using namespace std;
/* membuat linked list */
struct Node
{
 string mk,sks,caridata;
 Node* next;
};
 Node* head;
 Node* tail;

// menginisialisasi head dan tail
void inisialisasi()
{
 head = NULL;
 tail = NULL;
}

// fungsi untuk menambahkan data dari depan Node
void Tambahdepan()
{
    Node *awal;
    awal = new Node;
    cout<<"\nMasukkan Data lengkap di bawah ini : " << endl;
	cout<<"Masukkan Mata Kuliah  : "; cin.ignore(1, '\n'); getline(cin, awal->mk);
    cout<<"Masukkan Jumlah SKS   : "; cin>>awal->sks;
    awal->next = NULL;
    if(head==NULL)
    {
    head=tail=awal;
    tail->next=NULL;
    }else
    {
    awal->next = head;
    head=awal;
    }
    cout<<"data dimasukan!!\n";
}

// fungsi untuk menambahkan data dari tengah Node
void Tambahtengah()
{
    int posisi;
  	Node *baru, *masuk, *masuk2;
  	baru = new Node;
    if (head !=NULL)
    {
    	cout<<"Input pada data ke : "; cin>>posisi;
		baru->next=NULL;
    	masuk=head;
    	for (int i = 1 ; i < posisi-1; i++)
    	{
      		masuk=masuk->next;
    	}
    	cout<<"========= Tambah Data Tengah =======\n";
		cout<<"Masukkan Mata Kuliah  : "; cin.ignore(1, '\n'); getline(cin, baru->mk);
        cout<<"Masukkan Jumlah SKS   : "; cin>>baru->sks;
		baru->next = NULL;
		masuk2=masuk->next;
		baru->next=masuk2;
		masuk->next=baru;
    }if (head !=NULL){
    cout<<"Data masuk\n";
    }else
	cout<<"Tidak dapat disisipkan";
	getch();
}

// fungsi untuk menambahkan data dari belakang Node
void Tambahbelakang()
{
	Node *akhir;
	akhir = new Node;
	cout << "\nMasukkan Data lengkap di bawah ini : " << endl;
	cout<<"Masukkan Mata Kuliah  : "; cin.ignore(1, '\n'); getline(cin, akhir->mk);
    cout<<"Masukkan Jumlah SKS   : "; cin>>akhir->sks;
	akhir->next = NULL;
	if(head==NULL)
	{
    head=tail=akhir;
    tail->next=NULL;
	}
	else
    {
	tail->next=akhir;
	tail=akhir;
	cout<<"data dimasukan!!\n";
    }
}

// fungsi untuk menghapus dari depan Node
void Hapusdepan()
{
	Node *hapus;
	if (head==NULL)
	{
    cout<<"Data Kosong\n";
	}
	else
	{
	cout <<"Data depan terhapus!!";
    hapus=head;
    head=head->next;
    delete hapus;
	}
}

// fungsi untuk menghapus dari tengah node
void hapustengah()
{
    int tempat;
	Node *hapus, *tolong, *tolong2;
	cout<<"Urutan data yang dihapus : ";
	cin>>tempat;
	tolong=head;

	for (int i = 1; i < tempat-1; i++)
	{
		tolong=tolong->next;
	}
	hapus=tolong->next;
	tolong2=hapus->next;
	tolong->next=hapus->next;
	cout<<"Mata Kuliah " << hapus->mk
	<<" telah dihapus\n";
	delete hapus;
}

//fungsi untuk menghapus dari belakang node
void Hapusbelakang()
{
	Node *akhir, *hapus;
  	akhir=head;
  	if (head==NULL)
	{
		cout<<"Data Kosong\n";
	}
	else
	{
	cout <<"Data belakang terhapus!!";
    while(akhir)
    {
    if(akhir->next==tail){
    hapus=tail;
    tail=akhir;
    tail->next=NULL;
    delete hapus;
    break;
    }
    akhir=akhir->next;
    }
}
}

// Mencetak data
void cetak()
{
  int no = 1;
  Node *bantu;
  bantu = head;
  if (head==NULL)
 {
  cout<<" Data Kosong ";
 }
  else
 {
  while(bantu !=NULL)
 {
  cout << "\nNomor ke- : " << no << endl;
  cout << "\nMata Kuliah 	: " << bantu->mk << endl;
  cout << "Jumlah SKS	: " << bantu->sks << endl;
  no++;
  bantu = bantu->next;
  }
}
}

// Fungsi menghapus semua data
void clear()
{
	Node *bantu=head;
	Node *hapus;
	if(head==NULL)
	{
		cout<<"Data Kosong\n";
	}
	else
    while(bantu!=NULL)
	{
	cout << "Semua Mata Kuliah Terhapus";
	hapus=bantu;
	bantu=bantu->next;
	delete hapus;
	}
	head=tail=NULL;
	getch();
}

// Fungsi cari data
void cari()
{
    Node *bantu;
	bantu=head;
	tail=bantu;
	cout<<"\nMata Kuliah Yang Dicari \t: ";cin.ignore(1, '\n'); getline(cin, bantu->caridata);
	if(head=NULL)
	{
		cout<<"Data Kosong";
	}
	else
	{
		while(bantu!=NULL)
	{
	if(bantu->next)
	{
		cout<<"\n===Menemukan Data Yang Dicari===";
		cout<<"\nMaka Kuliah yang dicari : "<<bantu->mk;
		cout<<"\nJumlah SKS yang dicari  : "<<bantu->sks;
		cout<<"\n";
	}
	else
	{
	if(head=tail=NULL)
		cout<<"Tidak ada data ditemukan";
	}
	bantu=bantu->next;
	}
}
getch();
}

// program utama
int main(){
int pilih;
do
{
system("cls");
cout << "=================MENU UTAMA==================\n";
cout << "---------------------------------------------\n";
cout << "| Pilih Menu Untuk Menambahkan Mata Kuliah  |\n";
cout << "---------------------------------------------\n";
cout << "| 1. Tambah Mata Kuliah Dari Awal           |\n";
cout << "| 2. Tambah Mata Kuliah Dari Tengah         |\n";
cout << "| 3. Tambah Mata Kuliah Dari Akhir          |\n";
cout << "| 4. Hapus Mata Kuliah Dari Depan           |\n";
cout << "| 5. Hapus Mata Kuliah Dari Tengah          |\n";
cout << "| 6. Hapus Mata Kuliah Dari Akhir           |\n";
cout << "| 7. Cetak Semua Mata Kuliah                |\n";
cout << "| 8. Hapus Semua Mata Kuliah                |\n";
cout << "| 9. Cari data                              |\n";
cout << "| 0. keluar                                 |\n";
cout << "---------------------------------------------\n";
cout << "PILIHAN ANDA  = ";
cin>>pilih;
switch(pilih){
case 1 : Tambahdepan();
         getch();
         break;

case 2 : Tambahtengah();
         getch();
         break;

case 3 : Tambahbelakang();
         getch();
         break;

case 4 : Hapusdepan();
         getch();
         break;

case 5 : hapustengah();
         getch();
         break;

case 6 : Hapusbelakang();
         getch();
         break;

case 7 : cetak();
         getch();
         break;

case 8 : clear();
         getch();
         break;

case 9 : cari();
         getch();
         break;

case 0 : exit(true);
         break;
         default :
         cout<<"Menu tidak tersedia!"<<endl;
         cout << "Tekan Enter untuk kembali ke menu!";
         getch();
      }
      }while(pilih != 0);
    return pilih;
}


