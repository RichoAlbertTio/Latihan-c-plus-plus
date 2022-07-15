#include <stdio.h>
#include <conio.h>

main()

{
/* valid_operator diinisialisasi dengan logika 1 */
int d = 1;
char tanda;
float a,b,c;
	cout<<"masukan angka pertama:"; cin>>a;
	cout<<"pilih lah(+,-,*,/)   :"; cin>>tanda;
	cout<<"masukan angka kedua  :"; cin>>b;
	switch(tanda){
case '*' : 
c = a * b; 
break;
case '+' : 
c = a + b; 
break;
case '-' : 
c = a – b; 
break;
case '/' : 
c = a / b; 
break;

if(valid_operator)
printf (“%g %c %g adalah %gn”, a, tanda, b, c);

else
printf (“Invalid Operator”);

getch();
}
}
