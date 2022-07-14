#include <iostream>
#include <limits>	// deklarsi penggunaan limits
using namespace std;

/*
	integer = int = bilangan bulat
	1 byte = 8 bit ;
	 cout<< sizeof(a) << "byte" <<endl;          = berapa size int byte
	 cout<< numeric_limits<int>::max() << endl;  = melihat nilai maksimum dari integer
	 = 2147483647
	 
	 cout<< numeric_limits<int>::min() << endl;  = melihat nilai minimum dari integer
	 =-2147483648
	 long = bilangan bulat yang banyak;
	 
	 short = bilangna bulat yang pendek;
	 32767
	-32768
	
*/
int main()
{
	
 short c = 1;
 
 cout<< c << endl;
 cout<< sizeof(c) << "byte" <<endl;
 cout<< numeric_limits<short>::max() << endl;
 cout<< numeric_limits<short>::min() << endl;
 return 0;
}

/* bilangan bulat
	-int  a = 5 ; 
	-long a = 5 ;
	-short a = 5;
	
	bilangan desimal
	-float 
	-double
	
	character
	-char
	
	boolean
	- bool 
*/
