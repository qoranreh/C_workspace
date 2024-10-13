#include <stdio.h>
void recent(struct DATE a[]);
struct  DATE {
	int month;
	int day;
	int year;
}Date[3];

int main(void) {
	scanf_s("%d %d %d", &Date[0].year, &Date[0].month, &Date[0].day);
	scanf_s("%d %d %d", &Date[1].year, &Date[1].month, &Date[1].day);

	recent(Date);
	printf("%d %d %d", Date[2].year, Date[2].month, Date[2].day);
}

void recent(struct DATE a[]) {
	if ((a[0]).year > (a[1]).year)
		a[2].year = a[0].year;

	else
		a[2].year = a[1].year;
	if ((a[0]).month > (a[1]).month)
		a[2].month = a[0]. month;

	else
		a[2].month = a[1].month;
	if ((a[0]).day > (a[1]).day)
		a[2].day = a[0].day;

	else
		a[2].day = a[1].day;
}