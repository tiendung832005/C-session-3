//1 tao chuong trinh
#include <stdio.h>
#include <math.h>
//2 tao ham main
int main(){
	//3 khai bao chieu dai va chieu rong
	float length, height;
	//4 thong bao nhap chieu dai chieu rong
	printf("Nhap vao chieu dai va chieu rong: ");
	//5 lay 2 gtri tu ban phim gan vao length va height
	scanf("%f%f", &length,&height);
	//6 khai bao va khoi tao bien dien tich
	float area = length*height;
	//7 khai bao va khoi tao bien chu vi
	float perimeter = (length + height)*2;
	//8 in ra dien tich hcn
	printf("Dien tich hcn la: %.1f, Chu vi hcn la: %.1f", area, perimeter);
	
}
