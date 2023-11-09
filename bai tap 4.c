#include<stdio.h>
#include<math.h>
int main(){
	int number1, number2, number3;
	printf ("nhap so number1: \n");
	scanf ("%d", &number1);
	printf ("nhap so number2: \n");
	scanf ("%d", &number2);
	printf ("nhap so number3: \n");
	scanf ("%d", &number3);
	//1 su dung scanf nhap 3 so nguyen
	scanf ("%d%d%d", &number1, &number2, &number3);
	//2 khai bao max va min bang number1
	int max = number1;
	int min = number1;
    //3 su dung toan tu 3 ngoi
    if (max < number2){
    	max = number2;
	}
    	
	if (max < number3){
	    max = number3; 
	}
	if (min > number2){
		min = number2;
		
	}
	if (min > number3){
	    min = number3;
	}
	printf("max la: %d va min la %d", max, min);
}
