#include <iostream>		
#include <conio.h>		

using namespace std;

int main()
{
	int data[100];
	int i,j,k,tmp;
	cout<<"program bubble sort \n\n";
	cout<<"masukan jumblah bilingan:"; cin>>k;
	for (i=0; i<k; i++)
	{
		cout<<"masukan angka ke:"<<(i+1)<<" : ";
		cin>>data[i];
	}
	cout<<"\nAngka sebelum di urutkan : "<<endl;
	for(i=0; i<k; i++)
{
	cout<<data[i]<<" ";
}
cout<<endl;
for(i=0; i<k; i++)
	{
		for(j=i+1; j<k; j++)
	{
		if(data[i]>data[j])
	{
		tmp=data[i];
		data[i]=data[j];
		data[j]=tmp;
		}
	}
}
	cout<<"\nAngka setelah di ururtkan: "<<endl;
	for(i=0; i<k; i++)
{
	{
		cout<<data[i]<<" ";
	}
}
	getch;
}
