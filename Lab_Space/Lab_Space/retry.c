#include <stdio.h>
#include <string.h>
#define Max 20
int main(void) {
	

	char input[Max] = "Hello, Rob.\0";
	char search[Max] = "Rob";
	int cousor = 0;
	int Bool = 0;
	int count = 0;
	while (input[cousor] != '\0') {
		//printf("0\n");
		if (input[cousor] == search[0]) {
			//window 
			for (int i = 0; i < strlen(search); i++)
				if (input[cousor + i] == search[i]) {
					Bool = 1;
				}
				else Bool = 0;

		}
		if (Bool) {
			count++;
			printf("%d\n", count);
		}
		Bool = 0;
		cousor++;
	}
	return 0;
}