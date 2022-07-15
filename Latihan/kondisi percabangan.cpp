#include <iostream>
using namespace std;

int main()
{
//percabang if 
//if tunggal
	 
	//	 int nilai =80;
	//	 if (nilai>=80){cout<<"andalan kelas";

// pekerjaan
// loker : TB > 165 , BB > 55 , laki
	//	float tb =155.3, bb=60.3;
	//	bool laki = true;
	// logika and (&&) harus true berarti iya
	// logika Or (||) jika hanya salah satu berarti iya 	
	//	if (tb > 165 && bb>55 && laki == true) ----- versi panjang	
	//	if (tb > 165 && bb > 55 && laki) {cout<<"anda diterima";
	//	}

//if ganda
	//	 int nilai =79;
	//	 if (nilai>=80){
	//	 cout<<"andalan kelas";
	//}else {
	//	 cout<<"belajar lagi sayang";}

//if majemuk
	//float ipk =3.4;
	//if(ipk >= 3.5 && ipk <= 4.0){
	//	cout<<"jumllah sks anda semester depan nambah ";  //-------> jika terpenuhi maka akan outputnya disini
	//}else if (ipk >= 2.5 && ipk < 3.5){                     
	//	cout<<" sks tetap sama";						//-------> jika tidak terpenuhai yg pertam maka akan di sini 
	//}else {cout<<"yok mudur yuk";}
	//}

//percabangan ternary
	//int nilai = 79;
	//string hasil = (nilai >= 80) ? "berhasil " : "gagal";	// jika nilai tidak lebih sam dengan 80 maka gagal
	//cout<<hasil<<endl;

//percabangan switch case 
	//int pilihan = 1 ;
	//switch(pilihan){
	//	case 1 :
	//		cout<<"anda memilih no 1";
	//		break;
	//	case 2 :
	//		cout<<"anda memilih no 2";
	//		break;
	//	default:
	//		cout<<"anda golput";
	//}
	
//for dan dan while loop ( ini ngecek dulu cara kerjanya benar nih kalau benar lakuin)
// for loop
	//	for( int index = 1; index <= 5; index ++){		// kondisi index <= 5 sebagai rumus 
	//		cout<<index<<endl;
	//}

// while loop
	//	int angka = 4;				// variabel
	//	while ( angka >= 1){		//ini di cek jika angka lebih dari satu maka
	//		cout<< angka <<endl;	// akan menampikan
	//		angka --;				// trus di kurangi 1
	//								// lalu di variabel angka putar teruus hingga kondisi nya benilai false
	//								// output nya akan 5 samapai 1 
	//	}
	//	cout<< angka;				// dan jika cout angka maka untuk tambahan 0 di out putnya karena 0 dika lebih besar dari 1


// kalau dari lakuin dulu baru di cek kalau salah berhenti
// do while
	//	int nilai =1;
	//	do{
	//		cout<<nilai<< endl;
	//		nilai++;
	//	}while(nilai <=5);

// array
//cara 1
	//	string nama[2];
	//	nama[0] = "richo";
	//	nama[1] = "albert tio";

// cara 2
	//  float ipk[3] = {4.0 , 3.2 , 2.9};
	//  cout<< ipk[2]<<endl;		// seblum di tambah 
	//  ipk[2] = 3.0;
	//  cout<< ipk[2]<<endl;		// sesudah di tambah

// contoh cara 2 (for)
	// cara 2
  float ipk[3] = {4.0 , 3.2 , 2.9};
  ipk[2] = 3.0;
  
   for (int i = 0; i < 3; i++) {
   	 cout << ipk[i] <<endl;
   }
}

	 
	 
