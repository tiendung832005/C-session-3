#include<stdio.h>
#include<math.h>
int main(){
	//1 khai bao va khoi tao bien r
	float r = 2.2;
	const float PI = 3.14;
	//2 tinh chu vi va dien tich hinh tron
	float area = r*PI;
	float perimeter = (r*2)*PI;
	//3 in ra ket qua
	printf ("Dien tich hinh tron la: %.1f, Chu vi hinh tron la: %.1f", area, perimeter);
	
}
