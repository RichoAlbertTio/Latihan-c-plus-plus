#include <iostream>
using namespace std;

// function parameter
int tambah (int a, int b){
 int tambah = a + b;
 cout<<tambah<<endl;
}

// funchtion tanpa parameter
float bagi(){
 float a = 5;
 float b = 5;
 float bagi = a/b ;
 cout<<bagi<<endl;
}


int main()
{
	int a , b ;
	cout<<"masukan angka pertama\t:"; cin>>a;
	cout<<"masukan angka kedua\t:"; cin>>b;
	tambah(a,b);
	bagi();
	return 0;
}
