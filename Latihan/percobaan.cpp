#include <iostream>
#include <cmath>
using namespace std;

int main()
{	//contoh 1
	//lowongan pekerjaan 
	//laki, & it & rapi
		//	bool pengecekan = true && true && false;
	// because (and) all true
	
	//contoh 2
		//lowongan pekerjaan 
		//perempuan , / it / rapi
//		bool pengecekan = true || true || false;

	//contoh 3
	//lowongan pekerjaan 
	//tidak laki ,& it & rapi
	// =misal kan kita cewek , berarti laki false
		//	bool pengecekan = !false && true && true;
		//	cout<<pengecekan;
		
		
	//casting bilangan bulat ke pecahan
	//cara 1
//	int bil1 = 10;
//	int bil2 = 3;
//	float hasil = (float) bil1 / (float) bil2;
//	
//	cout << hasil;


	//cara 2 bilangan pecahan ke bulat
//	float bil1 = 3.3;
//	int hasil = bil1 ;
//	
//	cout<<hasil;

	//cara bilangan bulat ke atas misal 8.9 apakah jika dibulatkan 
	//akan menjadi angka 9 atau 8
	// jika koma diatas 5 maka ke atas
	// jika koma di bawah 5 maka ke bawah  
	// untuk penggunaan ceil and floor kita harus menggunakan libry--->  
	// #include <cmath>
//float angka =8.9;
//int hasil = ceil (angka);	
//
//cout<<hasil;

	//jadikan bilangan bulat jika 8.5 apakah akan menjadi 8 atau 9 jika di bulatkan
//float angka =8.5;
//int hasil = floor (angka);
//cout<< hasil;

	return 0;
	
}
