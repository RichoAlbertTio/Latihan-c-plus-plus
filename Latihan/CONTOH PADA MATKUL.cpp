#include <iostream>
#include <conio.h>
#include <string>
#include <cstdio>

using namespace std;
/* membuat linked list */
/* membuat linked list */
struct Node
{
 char nama[20];
 char nim[20];
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

void tambahDepan(){
	Node *baru;
	baru = new Node;
	cout<<"Masukkan NIM & Nama Anda di bawah ini : "<<endl;
	fflush(stdin);
	cout<<"\nnim    :";	gets(baru->nim);
	cout<<" nama	:";	gets(baru->nama);
	baru->next = NULL;
	if(head ==NULL)
	{
	head=tail=baru;
	head->next=NULL;
	}
	else {
	baru->next = head;
	head = baru;
	}
	cout<<"Data telah masuk\n";
	getch();
}

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
    	fflush(stdin);
		cout<<"Nim    : "; gets(baru->nim);
        cout<<"Nama   : "; gets(baru->nama);
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

void Tambahbelakang()
{
	Node *akhir;
	akhir = new Node;
	cout << "\nMasukkan Data lengkap di bawah ini : " << endl;
	fflush(stdin);
	cout<<"Nim    : "; gets(akhir->nim);
    cout<<"Nama   : "; gets(akhir->nama);
	akhir->next = NULL;
	if(tail==NULL)
	{
	    tail=akhir;
	    tail->next=NULL;
	}
	else
    {
		tail->next=akhir;
		tail=akhir;
	}
	cout<<"data dimasukan!!\n";
    getch();
}

void Hapusdepan()
{
	Node *hapus;
	if (head==NULL)
	{
    cout<<"Data Kosong\n";
	}
	else
	{
	if (head !=tail)
	{
    hapus=head;
    head=head->next;
    cout <<"Data telah dengan nama" << hapus->nama<<" telah dihapus";
    delete hapus;
	}
	else
	{
		head=tail=NULL;
	}
}
    getch();
}

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
	cout<<"nama	"<< hapus->nama<<" telah dihapus\n";
	delete hapus;
	getch();
}

void Hapusbelakang()
{
	Node *akhir, *hapus;
  	akhir=head;
  	if (tail==NULL)
	{
		cout<<"Data Kosong\n";
	}
	else{
    while(akhir)
    {
    if(akhir->next==tail){
    hapus=tail;
    tail=akhir;
    tail->next=NULL;
    cout<<"data tealah dengan nama"<<hapus->nama<<"telah dihapus";
    delete hapus;
    break;
    }
    akhir=akhir->next;
    }
}
getch();
}

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
  fflush(stdin);
  cout << "\nNim:" << bantu->nim<<endl;
  cout << "nama :" << bantu->nama<<endl;
  no++;
  cout<< "\n \n";
  bantu = bantu->next;
  }
}
getch();
}

void cari()
{
    Node *bantu;
	bantu=head;
	char caridata[20];
	cout<<"\nMata Kuliah Yang Dicari \t: ";
	cin>> caridata;
	if(head==NULL)
	{
		cout<<"Data Kosong";
	}
	else
	{
		while(bantu!=NULL)
	{
	if(caridata,bantu->nama)
	{
		cout<<"\n===Menemukan Data Yang Dicari===\n";
		fflush(stdin);
  		cout << "nama :" << bantu->nama;
  		cout<<"\nnama yang bersangkutan adalah:"<<bantu->nama<<"\n"<<bantu->nim;
		cout<<"\n\n";
	}
	else
	{
		cout<<"tidak ada";
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
cout << "| 8. cari data             		        |\n";
cout << "| 9. keluar                                 |\n";
cout << "---------------------------------------------\n";
cout << "PILIHAN ANDA  = ";
cin>>pilih;
fflush(stdin);
switch(pilih){
case 1 : tambahDepan();
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

case 8: cari();
         getch();
         break;

case 9: exit(true);
         break;
         default :
         cout<<"Menu tidak tersedia!"<<endl;
         cout << "Tekan Enter untuk kembali ke menu!";
         getch();
      }
      }while(pilih != 9);
    return pilih;
}

