#include <stdio.h>

void change(float num, int* quar, int* dim, int* nik, int* pen);
int main(void) {
	float num;
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	scanf_s("%f", &num);
	change(num,&quarters, &dimes, &nickels, &pennies);
	printf("quarters:%d\n", quarters);
	printf("dimes:%d\n", dimes);
	printf("nickels:%d\n", nickels);
	printf("pennies:%d\n", pennies);
}

void change(float num,int* quar,int*dim,int*nik,int*pen) {
	int cent = num * 100;
	*quar = cent / 25;
	*nik = cent / 5;
	*dim = cent / 10;
	*pen = cent;

}