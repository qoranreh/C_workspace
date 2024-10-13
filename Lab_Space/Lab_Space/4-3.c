#include <stdio.h>
void Days(struct DATE* a);
struct  DATE{
	int month;
	int day;
	int year;
}Date;

int main(void) {
	scanf_s("%d %d %d", &Date.year, &Date.month, &Date.day);
	Days(&Date);
	printf("%d %d %d", Date.year, Date.month, Date.day);
}

void Days(struct DATE* a) {
	(*a).month = (*a).month * 30;
	(*a).year = (*a).year * 30 * 12;
}