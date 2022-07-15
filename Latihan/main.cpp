#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <stdlib.h>

using namespace std;

struct dataBuku{
	string kode;
	string nama;
	int tahunTerbit;
	string pengarang;
	long long hargaBuku;
}buku[50];

void inputData(){
	int masuk;
	cout << "Jumlah Data yang dimasukkan:	";
	cin >> masuk;
	for(int i = 0; i < masuk; i++){
		cout << "\nInputkan data ke-" << i+1 << endl;
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << "kode: ";
		getline(cin, buku[i].kode);
		cout << "nama: ";
		getline(cin, buku[i].nama);
		cout << "tahun terbit: ";
		cin >> buku[i].tahunTerbit;
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << "pengarang: ";
		getline(cin, buku[i].pengarang);
		cout << "harga buku: ";
		cin >> buku[i].hargaBuku;
	}
}

void cetakData(){
	int cetak;
	cout << "Jumlah Data yang dicetak:	";
	cin >> cetak;
	cin.ignore();
	for (int i = 0; i < cetak; ++i){
		cout << "\nInputkan data ke-" << i+1 << endl;
		cout << "kode: " << buku[i].kode << endl;
		cout << "nama: " << buku[i].nama << endl;
		cout << "tahun terbit: " << buku[i].tahunTerbit << endl;
		cout << "pengarang: " << buku[i].pengarang << endl;
		cout << "harga buku: " << buku[i].hargaBuku << endl;
	}
}


int main()
{
    int x;
    while(x!=4){
	system("cls");
	cout << "		Data Buku	   	  " << endl;
	cout << "---------------------------------" << endl;
	cout << "                 Menu" << endl;
	cout << "1. Masukkan Data Buku" << endl;
	cout << "2. Cetak Data Buku" << endl;
	cout << "3. Keluar" << endl;
	cout << "---------------------------------" << endl;
	cout << "Pilihan: ";
	cin >> x;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
		switch(x){
			case 1:
				inputData();
				system("pause");
				break;
			case 2:
				cetakData();
				system("pause");
				break;
			default:
				cout << "Pilihan Tidak Ada" << endl;
				break;
		}
    }
}
