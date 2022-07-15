#include <iostream>
using namespace std;

int
main ()
{
  int a, b, pil;
  float hasil;
  char coba;
  cout << "==program kalkulator==" << endl;
  cout << "1.penambahan\n";
  cout << "2.pengurangan\n";
  cout << "3.perkalian\n";
  cout << "4.pembagian\n";
  cout << "5.keluar\n";
  cout << "masukan pilihan anda :";
  cin >> pil;
  switch (pil)
    {
    case 1:
      cout << "masukan angka pertama\t:";
      cin >> a;
      cout << "masukan angka kedua\t:";
      cin >> b;
      hasil = a + b;
      cout << "hasil penambahan =" << hasil << endl;
      break;

    case 2:
      cout << "masukan angka pertama\t:";
      cin >> a;
      cout << "masukan angka kedua\t:";
      cin >> b;
      hasil = a - b;
      cout << "hasil pengurangan=" << hasil << endl;
      break;

    case 3:
      hasil = a * b;
      cout << "masukan angka pertama\t:";
      cin >> a;
      cout << "masukan angka kedua\t:";
      cin >> b;
      cout << "hasil perkalian=" << hasil << endl;
      break;

    case 4:
      cout << "masukan angka pertama\t:";
      cin >> a;
      cout << "masukan angka kedua\t:";
      cin >> b;
      hasil = a / b;
      cout << "hasil perkalian=" << hasil << endl;
      break;

    case 5:
      exit;
      break;

    default:
      cout << "masukan anda salah";
    }
  cout<<"mau coba lagi? (y/t):"; cin>>coba;
  while (coba == 'Y' || coba == 'y');
  return 0;
}

