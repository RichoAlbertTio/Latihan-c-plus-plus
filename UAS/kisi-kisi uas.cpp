/*
    NAMA  : RICHO ALBERT TIO
    NIM   : 203030503O99
    TUGAS : UAS
*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

/* membuat linked list */
struct Node
{
	string nama;
	string nim;
    Node* next[5];
};

Node* head;
Node* tail;

// menginisialisasi head dan tail
void inisialisasi()
{
    head = NULL;
    tail = NULL;
}

// untuk mengecek data kosong
int isempty(){
if (head==NULL)
    return 1;
   else
    return 0;
}

// fungsi untuk menambahkan data dari belakang
void Tambahbelakang()
{
	Node *baru;
	baru = new Node;
    cout <<"\n============ Insert Data ===========\n";
	cout<<"\nNama : "; fflush(stdin); getline(cin, baru->nama);
	cout<<"NIM  : "; cin>>baru->nim;
	baru->next[5] = NULL;
	if(isempty()==1)
	{
		head=baru;
	}
	else
	{
		tail->next[5]=baru;
	}
	tail=baru;
	tail->next[5]=NULL;
	cout<<"------------------------------------";
	cout<<"\nData Terinput";
}

// Fungsi cari data
void cari(){
    Node *bantu ;
    bantu=head;
    string cari;
	cout <<"============= Cari Data ============\n";
	cout <<" \nCari Nama : ";cin.ignore(1, '\n'); getline(cin, cari);
    bool ketemu=0;
    if (isempty()==0)
      {
        while (bantu!=NULL)
        {
          bantu->nama;
          if(cari==bantu->nama)
          {
              cout <<"\n";
				cout <<"\nData Ditemukan";
				cout <<"\n====================================";
        		cout <<"\nNama      : " << bantu->nama <<endl;
       	 		cout <<"NIM       : " << bantu->nim <<endl;
				cout<<"\n";
               ketemu=1;
          }
          bantu=bantu->next[5];
        }
        if (ketemu==0)
        {
          cout<<"\nData Tidak Ditemukan!, silahkan masukan data";
          Tambahbelakang();
        }
      }
        else cout<<"Data Masih Kosong";

      getch();
}

// fungsi untuk Mencetak data
void TampilData()
{
  	Node *tampil;
  	tampil = head;
  	cout <<"\n======== Data Yang Dimasukan =======\n";
  	if (isempty()==1)
  	cout << "\nData Kosong!" << endl;
  	else
	{
    	while (tampil!= NULL)
    	{
        	cout <<"\nNama  : " << tampil->nama <<endl;
       		cout <<"NIM   : " << tampil->nim <<endl;
   	 		cout << "====================================";
		    tampil=tampil->next[5];
		}
	}
}

//fungsi untuk menghapus dari belakang node
void Hapusbelakang()
{
	Node *back, *del;
  	back=head;
  	if(head==tail)
	{
		head=NULL;
		cout<<"Daftar Buku Kosong\n";
	}
	else
	{
		cout <<"1 Data nama Terhapus dari Belakang";
		back=head;
       	while(back)
	   	{
        	if(back->next[5]==tail)
			{
           		del=tail;
           		tail=back;
           		tail->next[5]=NULL;
        		delete del;
        		break;
        	}
        back=back->next[5];
        }
	}
}

//Program utama
int main()
{
    char pilih;
    do
    {
      	system("cls");
      	cout<<"================ Menu =============="<<endl;
      	cout<<"[1] Tambah Data Dari Belakang       "<<endl;
      	cout<<"[2] Cari                            "<<endl;
      	cout<<"[3] Tampil Data                     "<<endl;
      	cout<<"[4] Hapus Data Dari Belakang        "<<endl;
	  	cout<<"[0] Keluar                          "<<endl;
		cout<<"------------------------------------"<<endl;
      	cout<<"\nMasukkan pilihan : ";
      	cin>>pilih;

      	switch(pilih)
      	{
      		case '1' :
                Tambahbelakang();
            	getch();
            	break;
      		case '2' :
      			cari();
      			getch();
      			break;
      		case '3' :
	            TampilData();
            	getch();
            	break;
      		case '4' :
	            Hapusbelakang();
            	getch();
            	break;
      		case '0' :
      			cout<<"-------- Terima Kasih --------";
            	exit(true);
            	break;
			default :
            	cout<<"\nPilihan Tidak Ada!	"<<endl;
            	getch();
      	}
    }
	while(pilih != 0);
	return pilih;
}
