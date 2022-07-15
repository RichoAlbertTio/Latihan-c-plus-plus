//http://a-a-n-g.blogspot.com/2015/03/contoh-program-krs-offline-dengan-c.html
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;

int Login();//Perkenalkan fungsi Login
int SignIn();//Perkenalkan fungsi Sign In
int KRS();//Perkenalkan fungsi KRS

struct data{//Structure data mahasiswa dan elemen yang mengisi
char Nama[50];   char NIM[50];
char Jurusan[3]; char Kelas[3];
int Semester;    int Tahun;
char PA[50];
}data_mhs;

struct k{//Structure data KRS dan elemen yang mengisi
char kode[8];
char mt_kuliah[50];
int sks;
char dosen[50];
} krs[9]={//Inisialisasidata structure yang berbentuk array
 {"KK-1113","Dasar Pemrograman            ",3,"Bryan Nurjayanti, S.Kom  "},
 {"KK-1110","Logika Algoritma             ",3,"Susandri, M.Kom          "},
 {"KK-1124","B.Inggris 1                  ",2,"Dewi Sari Wahyuni, SS    "},
 {"PK-1101","Pendidikan Pancasila         ",2,"Herman, M.Si             "},
 {"KB-1101","Pengantar Teknologi Informasi",2,"Hamdani, M.Kom           "},
 {"KK-1111","Managemen Umum               ",2,"Drs.Fahmi Oemar, MM      "},
 {"PK-1102","Pendidikan Agama             ",2,"Maimun, LC,MA            "},
 {"KK-1101","Kalkulus 1                   ",2,"Rini Yanti, S.Si         "},
 {"KK-1108","Fisika Dasar 1               ",3,"Firman Edigan, S.Si, M.Pd"}
};

char j,User[50],Pass[50];//Variabel global J = Jawab, Username dan Password
int main()
{
while(j!='a'||j!='b'||j!='c')//Syarat pengulangan jika input bukan keyword 'a'/'b'/'c'
  {
printf("\t\t    ______________________________________\n");
printf("\t\t    \xB2 SYSTEM KRS OFFLINE STMIK-AMIK-RIAU \xB2\n");
printf("\t\t    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("a.Log In\nb.Sign In\nc.Log Out\n::");scanf("%c",&j);
switch(j)//Memeriksa input data variabel j , jika 'a'/'b'/'c' maka dijalankan
   {
case 'a':
Login();//Jika pilihan 'a'maka akan memanggil fungsi Login
break;//Menghentikan cabang yang dijalankan, agar tidak diteruskan ke cabang lain
case 'b':
SignIn();//Jika pilihan 'b' maka akan memanggil fungsi Sign In
break;
case 'c'://Jika pilihan 'c' maka akan mengakhiri program
   {printf("\n\nThank's For Use This System!!\n\n"); system("pause"); return 0;}
   }
system("cls");//Clear screen / membersihkan layar
  }
getche();  }

int SignIn()//Fungsi Sign In KRS Offline
{
do{//Menjalankan perintah/ pernyataan dibawahnya, mengulang jika memenuhi syarat
system("cls");
printf("\t     ___________________________________________________\n");
printf("\t     \xB2 Create Your Account KRS Offline STMIK AMIK RIAU \xB2\n");
printf("\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
printf("Masukkan Data Dengan Benar dan Lengkap\n");
printf("\nNama Lengkap          :"); cin>>data_mhs.Nama;
printf("\nNIM / NPM             :"); cin>>data_mhs.NIM;
printf("\nUsername              :"); cin>>User;
printf("\nPassword              :"); cin>>Pass;
printf("\nJurusan (TI / MI)     :"); cin>>data_mhs.Jurusan;
printf("\nKelas (R / NR / SM)   :"); cin>>data_mhs.Kelas;
printf("\nSemester              :"); cin>>data_mhs.Semester;
printf("\nTahun Akademis        :"); cin>>data_mhs.Tahun;
printf("\nPenasehat Akademis    :"); cin>>data_mhs.PA;
printf("\n\nIngin Mengubah Data Yang Telah Dimasukkan ? (Y / N) :");
cin>>j;
  }
while(j=='y'||j=='Y');//Syarat pengulangan,kembali ke do
system("cls");
printf("\n\nCongratulation You're Registration Success, You're Account Now Activated !!");
printf("\n\nLogin Now ? (Y / N) :"); cin>>j;
if(j=='Y'||j=='y')
Login();//Memanggil fungsi Login jika memenuhi syarat
else
printf("\n\nThank's For Joining Us In System KRS Offline STMIK-AMIK-RIAU\n");
getche();
}
int Login()//Fungsi Log In KRS Offline
{ system("cls");
printf("\n_________________");
printf("\n\xB2  LOGIN NOW !  \xB2");
printf("\n~~~~~~~~~~~~~~~~~");
int y;//Variabel lokal fungsi Login
char loginuser[50],loginpass[50];//Variabel lokal fungsi Login
printf("\n\nUSER           : "); cin>>loginuser;
printf("\nPASSWORD       : "); cin>>loginpass;
if(strcmp(loginuser,User)==0&&strcmp(loginpass,Pass)==0)//Syarat Login
{ printf("\nCongratulatios You're Success Login\n");
printf("Press (Y) to Print Your KRS !\n");
scanf("%d",&y);
system("cls");
KRS(); }//Memanggil fungsi KRS

else//Jika tidak memenuhi syarat
{ printf("\nUsername / Password is Incorrect, or You're Account in Not Activated.\n");
printf("a.Login Again\nb.Registration Now\n ::");
cin>>j;
if(j=='a'||j=='A')
Login();//Memanggil fungsi Login lagi jika memenuhi syarat
else if(j=='b'||j=='B')
SignIn();//Memanggil fungsi Sign In jika memenuhi syarat
  }}

int KRS()//Fungsi KRS (Print KRS)
{
int i,totalsks;//variabel lokal fungsi KRS
totalsks=0;//Nilai awal variabel total sks
printf("\t\t\tKARTU RENCANA STUDI (KRS)\n\n");
printf("\nNama Mahasiswa   : %s", data_mhs.Nama);
printf("\nNIM / NPM        : %s", data_mhs.NIM);
printf("\nJenis Pendidikan : S1 / SM");
printf("\nTahun Akademis   : 2013/2014");
printf("\nSemester         : Ganjil 2013/2014");
printf("\nJurusan          : Teknik Informatika\n\n");
printf("-------------------------------------------------------------------------------\n");
printf("|NO |  KODE   |\t\tMATAKULIAH\t       |SKS|\t      DOSEN\t      |");
cout<<"\n-------------------------------------------------------------------------------\n";
for(i=0;i<9;i++)//Syarat pengulangan untuk mencetak data KRS
  {
  cout<<"\n| "<<i+1<<" | "<<krs[i].kode<<" |  "<<krs[i].mt_kuliah<<" | "<<krs[i].sks<<" | "<<krs[i].dosen<<"|";
cout<<"\n-------------------------------------------------------------------------------";
totalsks+=krs[i].sks;//Proses untuk mencari total sks
  }
  cout<<"\n|        \tTotal SKS yang diambil\t       |"<<totalsks<<" |\t\t\t      |";
cout<<"\n-------------------------------------------------------------------------------";
cout<<"\n\n\nDisetujui Oleh\n";
cout<<"Penasehat Akademis,\t\t\t\t\tMahasiswa Ybs,\n\n\n\n\n\n\n";
cout<<"( "<<data_mhs.PA<<" )\t\t\t\t( "<<data_mhs.Nama<<" )";

getche();
}
