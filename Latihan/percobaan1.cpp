#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <stdlib.h>

using namespace std;

struct Musik{
	string nama[50];
	string judul[50];
	string album[50];
	string genre[50];
    int rear = -1;
    int front;
}data;

int isFull(){
    return(data.rear==50-1);
}
int isEmpty(){
    return(data.rear==-1);
}
void inputData(){
    if(isFull()){
            cout << "Playlist Musik Kosong" << endl;
    }else{
        data.rear++;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Masukan Penyanyi   :";
        getline(cin, data.nama[data.rear]);
        cout << "Masukkan Judul     :";
        getline(cin, data.judul[data.rear]);
        cout << "Masukkan Album     :";
        getline(cin, data.album[data.rear]);
        cout << "Masukkan Genre     :";
        getline(cin, data.genre[data.rear]);
        cout << "Playlist Telah Ditambahkan !"<< endl;
        }
    }

void pop(){
    if(isEmpty()){
        cout << "Daftar kosong !" << endl;
    }else{
        data.rear--;
        cout << "Playlist terakhir Sudah Diambil" << endl;
        }
    }
void dequeue(){
    if(isEmpty()){
        cout << "Playlist Musik Kosong" << endl;
    }else{
        data.nama[data.front];
        data.judul[data.front];
        data.album[data.front];
        data.genre[data.front];
        for(int i=data.front; i<=data.rear-1; i++){
            data.nama[i]=data.nama[i+1];
            data.judul[i]=data.judul[i+1];
            data.album[i]=data.album[i+1];
            data.genre[i]=data.genre[i+1];
        }
        data.rear--;
        cout << "Playlist Awal Sudah Diambil" << endl;
    }
}
void cetakData(){
    if(isEmpty()){
        cout << "Playlist Musik Kosong" << endl;
    }else{
        for(int i=data.rear; i>=0; i--){
        cout << endl;
        cout << "Playlist ke- "<< i+1<< endl;
        cout << "Penyanyi    : " << data.nama[i] << endl;
        cout << "Judul       : " << data.judul[i] << endl;
        cout << "Album       : " << data.album[i] << endl;
        cout << "Genre       : " << data.genre[i] << endl;
        }
    }
 }

int clear(){
    cout << "Semua Playlist Musik Sudah Terhapus " << endl;
    return data.rear = -1;
}
int main(){
    int x;
    while(x!=6){
	system("cls");
	cout << "||========Daftar Musik========||" << endl;
	cout << "||============Menu============||" << endl;
	cout << "|| 1. Push                    ||" << endl;
	cout << "|| 2. Pop                     ||" << endl;
	cout << "|| 3. Dequeue                 ||" << endl;
    cout << "|| 4. Tampil                  ||" << endl;
	cout << "|| 5. Clear                   ||" << endl;
	cout << "|| 6. Keluar                  ||" << endl;
	cout << "||============================||" << endl;
	cout << "  Pilihan: ";
	cin >> x;
	cout << endl;
		switch(x){
			case 1:
				inputData();
				system("pause");
				break;
			case 2:
				pop();
				system("pause");
				break;
            case 3:
                dequeue();
                system("pause");
                break;
            case 4:
                cetakData();
                system("pause");
                break;
            case 5:
                clear();
                system("pause");
                break;
			default:
				cout << "Terima Kasih telah menggunakan program ini :)" << endl;
				break;
		}
    }
}
