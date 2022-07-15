#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d=1;
	char tanda;
	cout<<"masukan angka pertama:"; cin>>a;
	cout<<"pilih lah(+,-,*,/)   :"; cin>>tanda;
	cout<<"masukan angka kedua  :"; cin>>b;
	switch(tanda)
{
	case '+':
	c=a+b;
	break;
	case '-':
	c=a-b;
	break;
	case '*':
	c=a*b;
	break;
	case '/':
	c=a/b;
	break;
	cout<<"hasil"<<c<<endl;
	default:
	cout<<"invalid operator";
}
 return 0;
}
