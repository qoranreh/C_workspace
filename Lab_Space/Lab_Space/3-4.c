#include <stdio.h>
void liquid(int c, int* g, int* q, int* p);
int main(void) {
	int gallons, quarts, pints,cups;
	scanf_s("%d", &cups);
	liquid(cups,&gallons,&quarts,&pints);

	printf("total cup is %d\n", cups);
	printf("gallons is %d\n", gallons);
	printf("quarts is %d\n", quarts);
	printf("pints is %d\n", pints);

}
void liquid(int c,int*g,int*q,int*p) {
	*g = c / 16;
	*q = c / 4;
	*p = c / 2;
	

}