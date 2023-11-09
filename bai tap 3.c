#include <stdio.h>
#include <math.h>
int main(){
	float mathMark, literatureMark, englishMark;
	//su dung scanf nhap diem du lieu vao bien
	printf("Nhap diem cua tung mon Toan, Van, Anh: ");
	scanf ("%f%f%f", &mathMark, &literatureMark, &englishMark);
	// tinh tong diem va diem trung binh
	float sum = mathMark + literatureMark + englishMark;
	float trung_binh = (mathMark + literatureMark + englishMark)/3;
	// in ra ket qua
	printf ("diem tong la: %.2f, Diem trung binh la: %.2f", sum, trung_binh);
}
