#include <iostream>                   
using namespace std;

int main()
{
		//pendahuluan
		//	cout<<"hello word"<<endl;
		//	cout<<"hello word";	   			//perbedaan akhiran (;) dan endl jika (;) ini duluan berarti output akan bersambung 
									// dan jika endl ouput akan ke alinea baru 
// ini untuk komentar satu baris 

/* 
	dan ini untuk komentar dua baris	
*/


	//cara 1 integer
//	int bilangan;
//	bilangan=15;
	
	//cara 2 
//	int nilai=10;
	
	//cara 3 
//	string namadepan = "richo", namabelakang = "albert tio"; 
//	cout<<bilangan<<"\n"<<nilai<<"\n"<<namadepan<<" "<<namabelakang<<endl;
	
	//konstanta
	//cara 1
//	const string kampus ="universitas palangkaraya";
	
	//cara 2
//	const float ipk1 = 3.38, ipk2 = 3.5;
//	cout<<kampus<<"\n"<<ipk1<<"\n"<<ipk2<<endl;

	
	// user input
//	   int bb;
//	   string nama;
	//kecuali string
//	   cout<<"masukan berat badan:";
//	   cin >> bb;
//	   cout<<bb<<endl;
	//string
//	   cout<<"masukan nama anda :";
//	   getline(cin,nama);
//	   cout<<nama<<endl;


	//operator
		//aritmatika
//		int angka = 9;
//		+ = TAMBAH
//		- = KURANG
//		/ = BAGI
//		* = KALI
//		% = MODULUS
//		angka +;			// angka = angka + 1 ------> persamaannya
//		cout<<angka;
	
	
	//penggisian atau assigment
//		int angka = 9;
//			angka +=5;		// angka = angka + 5 ------> persamaannya
//			angka -=5;
//			angka *=5;
//			angka %=5;
//			angka ^=2;
//			cout<<angka;

	//PEMBANDING--------------------> biasa menggunakan tipe data boolean
//	true = 1
//	false= 0
//	bool pengecekan = 5 == 1;	// lima ya lima , satu ya satu
//	bool pengecekan = 5 != 1;	// lima bukan sama dengan satu
//	bool pengecekan = 5 <= 1;
//	bool pengecekan = 5 <> 1;	
//	cout << pengecekan;

	//logika
bool pengecekan = false || true;
cout << pengecekan;
			
		
	return 0;
}
