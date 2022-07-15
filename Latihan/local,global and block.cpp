#include <iostream>
using namespace std;

//contoh variabel global (yaitu bisa di akses di luar fungsi mana pun)
	//string nama ="richo albert tio";
	//
	//void cetaknama(){
	//	cout<<nama<<endl;
	//}
	//int main()
	//{
	//	cetaknama();
	//	nama = "richo";
	// 	cout << nama ;
	// 	return 0;
	
//contoh variabel local
	//string nama ="richo albert tio";		// variabel global
	//
	//void cetaknama(){
	//	string negara ="indonesia";			// variabel local berda di fungsinya
	//	cout << negara << endl;				// bisa di tampilakan di funsinya sendiri saja 
	//	cout << nama << endl;				// kalau dari variabel global bukan hanya di fungsi 
	//}										// dan bisa juga di dalam program utama 
	//										// jadi kalau local hanya akan di cetak di fungsinya saja
	//int main(){
	//	cetaknama();
	//	nama ="richo";						//variabel global bisa di ganti seperti ini 
	//	cout << nama<<endl;		
	//	string negara = "malaysia";			// dari variabel local hanya jika bisa masukin tipe data sesuai fungsinya dan jika kita tidak deklarasikan maka akan error lagi
	//	cout << negara<<endl;
	//	
	//	bool status = true;
	//	int angka ;
	//	if (status){
	//		angka = 5;
	//	cout << angka << endl;
	//	}

// contoh variabel blok
// sesuai dengan blok itu sendiri hampir mirip dgn local
// jika mau lebih rahasia dari pada local maka coba di pake blok
int main(){
	bool status = true ;
	{
		bool kerja = false ;
		cout << kerja ;	
	}

}
