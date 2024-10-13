#include <stdio.h>
struct DATE Days(struct DATE a);
struct  DATE {
	int month;
	int day;
	int year;
}Date,newDate;

int main(void) {
	scanf_s("%d %d %d", &Date.year, &Date.month, &Date.day);
	newDate=Days(Date);
	printf("%d %d %d", newDate.year, newDate.month, newDate.day);
}

struct DATE Days (struct DATE a) {
	a.month = a.month * 30;
	a.year = a.year * 30 * 12;
	return a;
}