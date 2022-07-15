#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void ascending(int n,int str[])
	{
	int i,j,t;
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-1;j++)
	{
	if(str[j]>str[j+1])
	{
	t=str[j];
	str[j]=str[j+1];
	str[j+1]=t;
	}
}
}


system("cls");
cout<<"---------------------------------------"<<endl;
cout<<"Setelah diurutkan berdasarkan Ascending"<<endl;
cout<<"---------------------------------------"<<endl;
for(i=0;i<n;i++)
{
cout<<str[i]<<" ";
}
}


void


int main()
{
int n;
int pilih;
cout<<"\t\t=================================="<<endl;
cout<<"\t\t-----[ PROGRAM SORTING NILAI ]----"<<endl;
cout<<"\t\t=================================="<<endl;
cout<<"Masukan jumlah nilai yang ingin di sorting : ";
cin>>n;
int str[n];
for(int i=0;i<n;i++)
{
cout<<"Masukan nilai ke- "<<i+1<<": ";
cin>>str[i];
}
system("cls");
cout<<"-----------------"<<endl;
cout<<"Sebelum diurutkan"<<endl;
cout<<"-----------------"<<endl;
for(int
i=0;i<n;i++)
{
cout<<str[i]<<" ";
}
do
{
cout<<"\n\t=========================="<<endl;
cout<<"\t-----[ MENU PILIHAN ]-----"<<endl;
cout<<"\t=========================="<<endl;
cout<<"1. Urutkan berdasarkan Ascending"<<endl;
cout<<"2. Urutkan berdasarkan Descending"<<endl;
cout<<"3. Exit"<<endl<<endl;
cout<<"Masukan Pilihan : ";
cin>>pilih;
switch(pilih)
{
case 1:
		ascending(n,str);
		break;

case 2:
		descending(n,str);
		break;

case 3:
		cout<<"\nTekan enter untuk keluar"<<endl;
		break;

default:
		cout<<"\nPilihan yang diinput tidak ada dimenu pilihan"<<endl;
		break;
}
}
while(pilih!=3);

}
