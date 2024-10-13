#include <stdio.h>
struct CAR {
	int carnumber;
	int milesdriven;
	int gallon;
}car[5];

int main(void) {
	for (int i = 0; i < 5; i++) {
		scanf_s("%d %d %d", &car[i].carnumber,&car[i].milesdriven,&car[i].gallon);
	}
	//평균계산
	float MpG[5];
	float avaerage=0;
	for (int i = 0; i < 5; i++) {
		MpG[i] = car[i].milesdriven / (float)car[i].gallon;
		avaerage+= MpG[i];
	}
	avaerage /= 5;
	
	//출력
	printf("CarNumber | MilesDriven | Gallons Used\n");
	for (int i = 0; i < 5; i++) {
		printf("%d        %d      %d", car[i].carnumber, car[i].milesdriven, car[i].gallon);
		printf("\n");
	}
	printf("-------------------------------\n");
	printf("The average miles per gallon by five cars is : %.2f",avaerage);

	
	return 0;
}

//25 1450 62
//36 3240 136
//44 1792 76
//52 2360 105
//68 2114 67