#include <iostream>
using namespace std;

// void function
//// bisa kita buat di luar fungsi utama untuk function
	//void cetaknama(){
	//	cout<<"nama kamu di hati";
	//}	
	//int main()		// ini adalah fungsi utama
	//{
	//	cetaknama();
	

//contoh pake paranmeter void fungsi yg tidak menggambilkan nilai
	// 
	// void cetaknama(string nama, string ucapan ){
	// 	cout << "hallo " << nama << " selamat " << ucapan;	
	// }
	// int main()
	// {
	// 	cetaknama("richo", "ngoding");		// jadi kita panggil fungsi cetaknama kerena kita mengirim kan data dengan string  dia menerima tipe data string
	 						// richo kita kirim kan ke string nama di simpan di nama 
	 						// trus ngoding kita kirim ke ucapan dan di simpan ke ucapan 

// return function 
	// ini  uang mengembalikan nilai 
	//	int hitungjumlah(int bil1, int bil2){			//  int hitungjumlah gk harus juga sama  (bagian ini misal bisa char ,int & dll)
	//		int hasil = bil1 * bil2;
	//		return hasil;								// berarti mengembalikan nilai hasil
	//	}
	//	int main(){
	//	
	//	int perkalian = hitungjumlah(4,5);						// berarti hasil 4 akan masuk ke bil1 dan 5 = bil2  berarti hasil= 4 x 5 = 20 dan hasil 20 tersebut di simpan di int perkalian
	//	cout << perkalian<<endl;								// menampikan outputnya 
	//	
	//	cout<<"hasil perkalian" << hitungjumlah(2,10)<<endl;  // atau langsung di tampilkan
	//	}

// recursive function 
	//	void hitungmundur(int angka){
	//	  if(angka >=1)						// jadi gini input angka = 5 jadi disini angka lebih dari 1 
	//		cout<< angka << endl;			// kalau iya tammpilin angka nya 
	//		hitungmundur(angka -1);}		// trus dia panggil lagi diri nya sendiri jadi angka  dikurang 1 karena disini 1 >= 1 maka 1
	//		
	//	int main(){
	//		hitungmundur(5);
	//}
	
// recursive function	
//perpangkatan 
// 5^3 = 5*5^2
// 5^2 = 5*5^1
// 5^1 = 5*5^0
// apapun yg di pangkat 0 angka 1 kecuali yg di  pangkat = 0 akan tetap 0
	//	int perpangkatan(int bil1, int pangkat){
	//		int hasil;										
	//		if(pangkat ==0){								//bi1 =5 dan pangkat 3 jadi jika pangkat 0 maka akan bernilai 1 dan jika tidak nol mak masuk ke kondisi else caranya
	//			return 1;
	//		}else{
	//		hasil = bil1* perpangkatan(bil1 ,pangkat - 1);	
	//		}
	//			return hasil;
	//	}
	//		int main()
	//		{
	//			int pangkat = perpangkatan(5,3);			// maka return hasil akan masuk ke perpangkatan input dan di simpan ke pangkat dan di cetak		
	//			cout<<pangkat<<endl;	
	//		}
	



