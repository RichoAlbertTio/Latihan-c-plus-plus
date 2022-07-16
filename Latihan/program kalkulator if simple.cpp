#include <iostream>

using namespace std;

int main()
{
 float a , b , hasil;
 char operasi;
 cout<<"masukan angka pertama\t:"; cin>>a;
 cout<<"masukan operasi(+,-,*,/):"; cin>>operasi;
 cout<<"masukan angka kedua\t:"; cin>>b;
 
 cout<<"==program calkulator=="<<"\n"<<a<< operasi <<b;
 if (operasi =='+'){
 	hasil = a+b;
 }
else if (operasi =='-'){
 	hasil = a-b;
 }
else if (operasi =='*'){
 	hasil = a*b;
 }
else if (operasi =='/'){
 	hasil = a/b;
 }
else {
 cout<<"masukan anda salah sayang";	
}
 cout<<"="<<hasil<<endl;
 return 0;
 
}
