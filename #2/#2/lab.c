#include <stdio.h>

int main(void) {
	
		
		scanf_s("%c",&calander.month);
		scanf_s("%c", &calander.day);
		scanf_s("%d", &calander.year);
		printf("%c", calander.month);
		printf("%c", calander.day);
		printf("%d", calander.year);
}
struct 
{
	char month;
	char day;
	int year;
}calander;