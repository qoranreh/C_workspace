#include <stdio.h>
void show(double rates[]);
int main(void) {
	double rates[9] = { 6.5, 8.2, 8.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0 };
	show(rates);
}
void show(double rates[]) {
	for (int i = 0; i < 9; i++) {
		printf("%.1lf", rates[i]);
		printf("\n");
	}
		

}