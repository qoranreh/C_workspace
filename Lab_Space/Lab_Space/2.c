#include <stdio.h>
void calculate(int* n1, int* n2, int* re1, int* re2, int* re3, int* re4);
int main(void) 
{
	int N1, N2;
	int re1, re2, re3, re4;
	scanf_s("%d, %d", &N1, &N2);
	
		calculate(&N1, &N2, &re1, &re2, &re3, &re4);
	
		return 0;
}

void calculate(int* n1, int* n2, int* re1, int* re2, int* re3, int* re4) {
	
		*re1 = *n1 * *n2;
		printf("%d", *re1);
		if (*n2 <= 0) {
			printf(", invaild value");
			printf(", invaild value");
		}
		else {
			*re2 = *n1 / *n2;
			printf(", %d", *re2);
			*re3 = *n1 % *n2;
			printf(", %d", *re3);
		}
		*re4 = *n1 + *n2;
		printf(", %d", *re4);
	
}