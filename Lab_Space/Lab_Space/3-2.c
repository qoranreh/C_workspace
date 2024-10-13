#include <stdio.h>
int sec(int n, int m, int s);
int main(void) {
	int total, hours, minutes, seconds;
	scanf_s("%d, %d, %d", &hours, &minutes, &seconds);
	total = sec(hours,minutes, seconds);
	printf("total is %d", total);

}
int sec(int h, int m, int s) {

	int total = 0;
	total += s;
	total += m * 60;
	total += h * 60 * 60;
		return total;
}