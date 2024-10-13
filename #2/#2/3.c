#include <stdio.h>

int main(void) {


	return 0;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

}

void change(int num,int *quar,int*dim,int*nick,int*pen) {
	*quar = num * 25;
	*dim = num * 10;
	*nick = num * 5;
	*pen = num * 1;
}