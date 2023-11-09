#include<stdio.h>
int main(){
	int birthday;
	printf("Nhap vao nam sinh: ");
	scanf("%d", &birthday);
	int age = 2023 - birthday;
	printf("tuoi hien tai la: %d\n", age);
	if(age % 2 == 0){
		printf("Tuoi chan");
		
	}
	else{
		printf("tuoi le");
	}
	
}
