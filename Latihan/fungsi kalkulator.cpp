#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void tambah(float a, float b)
{ 
    cout<<"hasil penambahan = ";
    cout<<a+b;
 }
void kurang(float a, float b)
{ 
    cout<<"hasil pengurangan = "<<a-b;
 }
 void kali(float a, float b)
{ 
    cout<<"hasil kalinya = "<<a*b;
 }
void bagi(float a, float b)
{ 
    cout<<"hasil baginya = "<<a/b;
    
    
 }

int main()
{
    float a, b;
    char k;
    int kode;
     
    menu:
    cout<<"=================================\n";
    cout<<"KALKULATOR SEDERHANA PAKAI FUNGSI\n";
    cout<<"=================================\n";
    
    
    cout<<"\nmasukan bilangan pertama = ";
    cin>>a;

    cout<<"\n\npilih kode\n1.Tambah\n2.Kali\n3.Bagi\n4.Kurang\nMasukan Kode = ";
    cin>>kode;
    cout<<endl;
    
    apa :
    if(kode==1||kode==2||kode==3||kode==4){
    goto bil;
        }
        else{
        goto lagi;
    }

    bil : 
    cout<<"\nmasukan bilangan kedua = ";
    cin>>b;
    
    cout<<endl;
       if (kode==1){
   tambah(a,b);}
      else if (kode==2){
    kali(a,b);}
       else if (kode==3){
    bagi(a,b);}
       else if (kode==4){
    kurang(a,b);}
    
       else{     
    cout<<"salah";
        }
     
 
    cout<<"\n\nMau coba lagi ? (y/t)";
    cin>>k;
    
    if(k=='Y'||k=='y')
    {
        system("clear");
         goto menu;
    }
    
    if(k=='T'||k=='t')
    {
        goto akhir;
    }
    
lagi :
    cout<<"masukan anda salah, masukan lagi = ";
    cin>>kode;
    goto apa;
akhir :
    cout<<"\n\n-creedit BY Venominz.com\n\n";


 }
