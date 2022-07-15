#include <iostream>

using namespace std;

int main (){

    float a,b, hasil;
    char aritmatika;

    cout<<"=============================================="<<endl;
    cout<<"=                                            ="<<endl;
    cout<<"=   Program Calculator Menggunakan IF-ELse   ="<<endl;
    cout<<"=                                            ="<<endl;
    cout<<"=============================================="<<endl;

    //Memasukan Input dari user
    cout<<"Masukan Nilai Pertama  : ";cin>>a;
    cout<<"Pilih Operator +,-,/,* : ";cin>>aritmatika;
    cout<<"Masukan Nilai Kedua    : ";cin>>b;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Hasil Perhitungan : "<<a<<aritmatika<<b;

    if(aritmatika == '+'){
        hasil = a+b;
        cout<<" = "<<hasil<<endl;
    }else if (aritmatika == '-'){
        hasil = a-b;
        cout<<" = "<<hasil<<endl;
    }else if (aritmatika == '*'){
        hasil = a*b;
        cout<<" = "<<hasil<<endl;
    }else if (aritmatika == '/'){
        hasil = a/b;
        cout<<" = "<<hasil<<endl;
    }else {
        cout<<"----------------------------------------------"<<endl;
        cout<<"=     OPERATOR YANG ANDA MASUKAN SALAH !!!   ="<<endl;
        cout<<"----------------------------------------------"<<endl;
    }

    //Menahan program
    cin.get();
    return 0;
}

