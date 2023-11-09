//1 tao chuong trinh
#include <stdio.h>
#include <math.h>
//2 tao main
int main(){
	//3 khai bao bien chua gtri nguyen number
	int number;
	//4 thong bao nhap so nguyen printf
	printf("Nhap vao mot so nguyen");
	//5 lay gtri gan vao dia chi bien number
	scanf("%d", &number);
	//6 khai bao va khoi tao bien square binh phuong so nguyen
	int square = pow(number, 2);
	//7 in ra binh phuong so nguyeb
	printf("Binh phuong so nguyen: %d\n", square);
	
}
