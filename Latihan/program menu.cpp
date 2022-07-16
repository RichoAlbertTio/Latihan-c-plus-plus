#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
 int a,b,pilih;
 float luas;
 const int phi = 3.14;
 cout<<"program aritmatika\n";
 cout<<"1.luas panjang persegi\n";
 cout<<"2.luas segitiga\n";
 cout<<"3.luas lingkaran\n";
 cout<<"4.keluar\n";
 cout<<"masukan pilihan:"; cin>>pilih;
 
 
 switch(pilih){
 	case 1: cout<<"masukan angka pertama\t:"; cin>>a;
 		    cout<<"masukan angka pertama\t:"; cin>>b;
  luas = a*b;
 			cout<<luas;
 			break;
 			
 	// 0.5 = 1/2 ini rumus nya 
	// a = alas; b = tinggi;
		  	
 	case 2:cout<<"masukan angka pertama\t:"; cin>>a;
  		   cout<<"masukan angka pertama\t:"; cin>>b; 
		   luas = 0.5 * a * b;
 		   cout<<luas;
 		   break;
 			
 	// phi = 3.14; a = jari"
 	case 3: cout<<"masukan angka pertama\t:"; cin>>a;
	 		luas = phi * a * a;
 			cout<<luas;
 			break;
 	default:cout<<"inputan anda salah";
 }
 getch();
}
