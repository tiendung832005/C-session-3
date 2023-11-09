#include <stdio.h>
int main(){
	int thousandDigit, hundredDigit, dozenDigit, unitDigit;
	printf("So nguyen co 4 chu so la: ");
	thousandDigit = getchar();
	hundredDigit = getchar();
	dozenDigit = getchar();
	unitDigit = getchar();
	int sum = thousandDigit + hundredDigit + dozenDigit + unitDigit;
	printf ("tong cac chu so la: %d \n", sum);
	printf ("Chuoi dao nguoc la: ");
	putchar (unitDigit);
	putchar (dozenDigit);
	putchar (hundredDigit);
	putchar (thousandDigit);
}
