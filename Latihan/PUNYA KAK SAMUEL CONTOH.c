#include <stdio.h>
#include <conio.h>
#include <iostream>

struct Node 
{
	char nim[25];
	char nama[30];
	Node *lanjut;
};
Node *awal, *akhir;

void init()
{
	awal = NULL;
	akhir = NULL;
}

int kosong()
{
	if(akhir == NULL) return 1;
	else return 0;
}

void tambahDepan(){
	Node *baru;
	baru = new Node;
	cout<<"Masukkan NIM & Nama Anda di bawah ini : "<<endl;
	printf("NIM      : "); gets(baru->nim);
	printf("Nama     : "); gets(baru->nama);fflush(stdin);
	baru->lanjut = NULL;
	if(kosong()==1){
	awal=akhir=baru;
	akhir->lanjut=NULL;
	}
	else {
	baru->lanjut = awal;
	awal = baru;
	}
	cout<<"Data telah masuk\n";
}

void tambahBelakang(){
	Node *baru,*bantu;
	baru = new Node;
	cout << "Masuklan NIM & Nama Anda di bawah ini : " << endl;
	printf("NIM       : "); gets(baru->nim);
	printf("Nama      : "); gets(baru->nama);fflush(stdin);
	baru->lanjut = NULL;
	if(kosong()==1){
	awal=baru;
	akhir=baru;
	akhir->lanjut = NULL;
	}
	else {
	akhir->lanjut = baru;
	akhir=baru;
	}
	cout<<"Data telah masuk\n";
}

void hapusDepan(){
	Node *hapus;
	char* ni; char* na;
	if (kosong()==0){
	if(awal!=akhir){
	hapus = awal;
	ni = hapus->nim;
	na = hapus->nama;
	awal = awal->lanjut;
	delete hapus;
	} else {
	ni = akhir->nim;
	na = akhir->nama;
	awal=akhir=NULL;
	}
	cin>>"NIM dengan nama %s telah dihapus", na;
	} else printf("Data masih kosong\n");
}

void hapusBelakang(){
	Node *bantu,*hapus;
	char* ni; char* na;
	if (kosong()==0){
	bantu = awal;
	if(awal!=akhir){
	while(bantu->lanjut!=akhir){
	bantu = bantu->lanjut;
	}
	hapus = akhir;
	akhir=bantu;
	ni = hapus->nim;
	na = hapus->nama;
	delete hapus;
	akhir->lanjut = NULL;
	}else {
	ni = akhir->nim;
	na = akhir->nama;
	awal=akhir=NULL;
	}
	cout<<"NIM dengan nama %s telah dihapus", na;
	} else cout<<"Data masih kosong\n";
}

void tampil(){
	int no = 1;
	Node *bantu;
	bantu=awal;
	if(kosong()==0){
	while(bantu!=NULL){
	cout << "No.     : " << no << endl;
	cout << "NIM     : " << bantu->nim << endl;
	cout << "Nama    : " << bantu->nama << endl;
	cout << "=============================" << endl;
	no++;
	bantu=bantu->lanjut;
	}
	}
	else
	cout<<"Data Kosong, belum ada data yang masuk!"<<endl;
}

void search(char* caridata)
{
	char nama[25], nim[30];
	cout<<"Masukkan NIM yang ingin dicari : "; cin>>caridata;
	if (caridata == nim){
		cout<<"Nama yang tercantum "<<strstr(nama, caridata);
	}
	else cout<<"Data Kosong\n";
	getch();
}

int main(){
int pil; char caridata[30];
do{
system("cls");
cout<<"========================="<<endl;
cout<<"MENU PILIHAN"<<endl;
cout<<"========================="<<endl;
cout<<"1.Tambah Depan"<<endl;
cout<<"2.Tambah Belakang"<<endl;
cout<<"3.Hapus Depan"<<endl;
cout<<"4.Hapus Belakang"<<endl;
cout<<"5.Tampilkan Data"<<endl;
cout<<"6.Cari Nama"<<endl;
cout<<"7.Exit"<<endl;
cout<<""<<endl;
cout<<"Masukan Pilihan Anda :";pil=getche();
switch(pil){
case '1' : system("cls");
kosong();
tambahDepan();
break;
break;
case '2': system("cls");
kosong();
tambahBelakang();
break;
case '3': system("cls");
kosong();
hapusDepan();
break;
case '4': system("cls");
kosong();
hapusBelakang();
break;
case '5': system("cls");
kosong();
tampil();
break;
case '6' : system("cls");
kosong();
search(caridata);
}
getch();
}while(pil!='7');
return 0;
}
