#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

//link pembahasan http://virliana22.blogspot.com/

using namespace std;

struct Node
{
      string mk,sks,caridata;
      Node* next;
};

Node* head;
Node* tail;

void inisialisasi()
{
      head = NULL;
      tail = NULL;
}

void Tambahdepan()
{
    Node *baru;
    baru = new Node;
    cout<<"========= Tambah Data Depan =======\n";
	cout<<"Masukkan Mata Kuliah  : "; cin.ignore(1, '\n'); getline(cin, baru->mk);
	cout<<"Masukkan Jumlah SKS   : "; cin>>baru->sks;
    baru->next = NULL;
    if(head==NULL)
    {
        head=tail=baru;
        tail->next=NULL;
    }else
    {
        baru->next = head;
        head=baru;
    }
    cout<<"Data masuk\n";
}

void Tambahtengah()
{
    int posisi;
  	Node *baru, *masuk, *masuk2;
  	baru = new Node;

		baru->next=NULL;
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

	cout<<"Data masuk\n";
}



void Tambahbelakang()
{
	Node *baru;
	baru = new Node;
	cout<<"========= Tambah Data Belakang =======\n";
	cout<<"Masukkan Mata Kuliah  : "; cin.ignore(1, '\n'); getline(cin, baru->mk);
	cout<<"Masukkan Jumlah SKS   : "; cin>>baru->sks;
	baru->next = NULL;
	if(head==NULL)
	{
		head=baru;
	}
	else {
			tail->next=baru;
		 }
	tail=baru;
	tail->next=NULL;
	cout<<"Data Terinput\n";
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
	cout <<"Data Depan Terhapus";
		hapus=head;
		head=head->next;
		delete hapus;
	}
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
	cout<<"Mata Kuliah " << hapus->mk
	<<" telah dihapus\n";
	delete hapus;
}

void Hapusbelakang()
{
	Node *blkng, *hapus;
  	blkng=head;
  	if (head==tail)
	{
		head=NULL;
		cout<<"Data Kosong\n";
	}
	else
	{
	cout <<"Data Belakang Terhapus";
	blkng=head;
       while(blkng)
	   {
        if(blkng->next==tail){
           hapus=tail;
           tail=blkng;
           tail->next=NULL;
        delete hapus;
        break;
             }
        blkng=blkng->next;
       }
	}
}

void tampil()
{
  Node *temp;
  temp = head;
  cout << "Data yang dimasukan";
  cout << "\n=====================\n";
  if (temp == NULL)
    cout << "List kosong!" << endl;
  else
  {
    while (temp != NULL)
    {
     cout << "\nMata Kuliah 	: " << temp->mk << endl;
   	 cout << "Jumlah SKS	: " << temp->sks << endl;
   	 cout << "=====================";

     temp = temp->next;
	}
  }
}

void clear()
{
	Node *hapus;
	if(head==NULL)
	{
		cout<<"Data Kosong\n";
	}
	else
	{
	cout << "Semua Mata Kuliah Terhapus";
	hapus=head;
	hapus=tail;
	head=tail=hapus->next;
	delete hapus;
	}
	getch();
}

void cari()
{
	Node *bantu;
	bantu=head;
	cout<<"\nMata Kuliah Yang Dicari \t: ";cin.ignore(1, '\n'); getline(cin, bantu->caridata);
	if(head=tail=NULL)
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

int main()
{
      char pilih;
      do
      {
      system("cls");
      cout<<"=========================MENU UTAMA========================"<<endl;
      cout<<"-----------------------------------------------------------"<<endl;
      cout<<"======== Pilih Menu Untuk Menambahkan Mata Kuliah ========="<<endl;
      cout<<"\n"<<endl;
      cout<<"[1] Tambah Mata Kuliah Dari Awal      (Tambah Depan)  "<<endl;
      cout<<"[2] Tambah Mata Kuliah Dari Akhir     (Tambah Akhir)  "<<endl;
      cout<<"[3] Tambah Mata Kuliah Dari Tengah    (Tambah Tengah) "<<endl;
      cout<<"[4] Hapus Mata Kuliah Dari Depan      (Hapus Depan)   "<<endl;
      cout<<"[5] Hapus Mata Kuliah Dari Tengah     (Hapus Tengah)  "<<endl;
      cout<<"[6] Hapus Mata Kuliah Dari Akhir      (Hapus Akhir)   "<<endl;
      cout<<"[7] Cetak Semua Mata Kuliah 			               "<<endl;
      cout<<"[8] Hapus Semua Mata Kuliah						   "<<endl;
	  cout<<"[9] Caridata							               "<<endl;
	  cout<<"[0] Keluar							   			   	   "<<endl;
      cout<<"\nMasukkan pilihan : ";
      cin>>pilih;

      switch(pilih)
      {
      case '1' :
            Tambahdepan();
            getch();
            break;
      case '2' :
            Tambahbelakang();
            getch();
            break;
      case '3' :
      		Tambahtengah();
            getch();
            break;
      case '4' :
            Hapusdepan();
            getch();
            break;
      case '5' :
            hapustengah();
            getch();
            break;
      case '6' :
            Hapusbelakang();
            getch();
            break;
      case '7' :
            tampil();
            getch();
            break;
      case '8' :
      		clear();
      		break;
      case '9' :
      		cari();
      		break;
      case '0' :
            exit(true);
            break;
      }
      }while(pilih != 0);
    return pilih;
}
