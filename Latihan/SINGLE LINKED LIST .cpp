// memasukan library
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/* membuat linked list */
struct Node
{
    string nama,nim;
    Node *next;
};
    Node*head;
    Node*tail;
// menginisialisasi head dan tail
void inisialisasi()
{
    head=NULL;
    tail=NULL;
}

// fungsi untuk menambahkan data dari depan node
void tambahDepan()
{
    Node *baru;
    baru= new Node;
    cout << "Masukkan Data lengkap di bawah ini : " << endl;
    cout<<"Masukkan Nama  : "; cin.ignore(1, '\n'); getline(cin, baru->nama);
	cout<<"Masukkan Nim   : "; cin>>baru->nim;
    baru->next=NULL;
    if (head==NULL)
    {
        head=tail=baru;
        head->next=NULL;
    }
    else{
        baru->next=head;
        head=baru;
    }
    cout<<" data dimasukan!!";
    getch();
}

// fungsi untuk menambahkan data dari belakang node
void tambahBelakang()
{
    Node *baru;
    baru = new Node;
    cout << "Masukkan Data lengkap di bawah ini : " << endl;
    cout<<"Masukkan Nama  : "; cin.ignore(1, '\n'); getline(cin, baru->nama);
	cout<<"Masukkan Nim   : "; cin>>baru->nim;
    if(tail==NULL)
    {
        tail=baru;
        tail->next=NULL;
    }
    else{
        tail->next=baru;
        tail=baru;
    }
    cout<<"data dimasukan!!\n";
    getch();
}
// fungsi untuk menghapus dari depan node
void hapusDepan()
{
    Node *hapus;
    if (head==NULL)
    {
        cout<<" tidak ada data\n";
    }
    else
    {
        if (head !=tail)
    {
        hapus=head;
        head=head->next;
        cout<<"data telah dengan nama" <<hapus->nama<<"telah dihapus\n";
        delete hapus;
    }
    else
    {
        head=tail=NULL;
    }
    }
    getch();
}


/**
* fungsi untuk menghapus dari belakang node
*/
void hapusBelakang() {
        Node *bantu, *hapus;
        bantu= new Node;
        if (tail==NULL)
        {
            cout<< " tidak ada data";
        }else{
            while(bantu)
        {
            if (bantu->next==tail){
            hapus=tail;
            tail=bantu;
            tail->next=NULL;
            cout<< "data telah di dengan nama" <<hapus->nama<<" telah dihapus\n";
            delete hapus;
            break;
        }
        bantu=bantu->next;
        }
}
getch();
}

//fungsi untuk menampilkan data linked list
void tampil()
{
        int no = 1;
        Node *bantu;
        bantu = head;
        if (head==NULL)
        {
            cout<<" DATA MASIH KOSONG ";
        }
        else
        {
           while(bantu !=NULL)
        {
        cout << "Nomor ke- : " << no << endl;
        cout << "Nama : " << bantu->nama << endl;
        cout << "NIM  : " << bantu->nim << endl;
        no++;
        bantu = bantu->next;
        }
    }
getch();
}

//program utama
int main()
{
int pilihan;
do{
system("cls");
cout << "-------------------------\n";
cout << "|MENU SINGLE LINKED LIST|\n";
cout << "-------------------------\n";
cout << "| 1. Tambah Depan       |\n";
cout << "| 2. Tambah Belakang    |\n";
cout << "| 3. Hapus Depan        |\n";
cout << "| 4. Hapus Belakang     |\n";
cout << "| 5. tampilkan data     |\n";
cout << "| 6. keluar             |\n";
cout << "-------------------------\n";
cout << "| PILIHAN ANDA ? = ";
cin >> pilihan;
cout<<"\n";
switch (pilihan) {
case 1 :tambahDepan();
        getch();
        break;


case 2 :tambahBelakang();
        getch();
        break;

case 3 :hapusDepan();
        getch();
        break;

case 4 :hapusBelakang();
        getch();
        break;

case 5 :tampil();
        getch();
        break;

case 6 :exit(true);
        break;
        default :
        cout<<"Menu tidak tersedia!"<<endl;
        getch();
        }
        } while (pilihan != 6);
    return 0;
    }

