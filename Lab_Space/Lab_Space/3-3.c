#include <stdio.h>
void secs(int* s, int hours, int minutes, int seconds);
int main(void) {
	int total = 0;
		int hours, minutes, seconds;
	scanf_s("%d, %d, %d", &hours, &minutes, &seconds);
	secs(&total, hours, minutes, seconds);
	printf("total is %d", total);
}

void secs(int* s, int hours, int minutes, int seconds)
{
	*s += hours * 60 * 60;
	*s += minutes * 60;
	* s += seconds;

}