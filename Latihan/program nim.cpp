#include<iostream>
#include<conio.h>
using namespace std;

int main()
{char a[3];
cout<<"masukan kode jurusan  :"; 
cin>>a;
int b;
cout<<"masukan tahun angkatan:"; 
cin>>b;
int c;
cout<<"masukan nomor urut    :";
cin>>c;
if (c%2==0)

cout<<a <<b <<"0"<<c <<" adalah bilangan genap."<<endl;
else
cout<<a <<b <<"0"<<c <<" adalah bilangan ganjil."<<endl;
getch;
}

