#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define Max 50
#define Max2 500

//입력데이터 저장. 
struct datacase{
	char c1[Max], c2[Max], c3[Max], c4[Max2], c5[Max2];
	char s1[20], s2[20];
}DataCase;

char search[4] = "name";
int main(void) {
	//구조체 초기화
	strcpy(DataCase.c1, "Is yout name Bob?");
	strcpy(DataCase.c2, "No, my name is Rob.");
	strcpy(DataCase.c3,"Hello, Rob.");
	strcpy(DataCase.c4, "A thief named hong gil dong lived with friends named hong gil don and hong gil ja in a village named hong gil dong villang.");
	strcpy(DataCase.c5, "A thief named .hong gil dong. lived with friends named hong gil don and hong gil ja and hh.hong gil dong. and kong gil dong and .hong gil dong. and hong gil donggg in a village named .hong gil dong. village.");
	strcpy(DataCase.s1, "name");
	strcpy(DataCase.s2, "hong gil dong");
	int coursor = 0;
	int count = 0;
	int searchTrue = 0;
	char Data[Max2];//String저장 
	char SearchStr[Max];//search String 저장 

	for(int j=0;j<5;j++)
	{
		if(j==0)
		{
			strcpy(Data, DataCase.c1);
			strcpy(SearchStr, DataCase.s1);
		}
		
		else if (j==1)
		{
			strcpy(Data, DataCase.c2);
			strcpy(SearchStr, DataCase.s1);
			
		}
		else if (j==2)
		{
			strcpy(Data, DataCase.c3);
			strcpy(SearchStr, DataCase.s1);
		}
		else if (j == 3)
		{
			strcpy(Data, DataCase.c4);
			strcpy(SearchStr, DataCase.s2);
		}
		else if (j == 4)
		{
			strcpy(Data, DataCase.c5);
			strcpy(SearchStr, DataCase.s2);
		}
		
		while (Data[coursor] != '\0') {//문장 끝날때까지 반복. 
			if (Data[coursor] == SearchStr[0]) {//첫글자 판별 
				//windowsearch 시작 
				for (int i = 0; i < strlen(SearchStr); i++) {//4번반복. 
					//4번다 맞을 경우 반복 종료 후 결과 출력. 
					if (Data[coursor + i] == SearchStr[i]) {
						searchTrue = 1;
					}
					// 안맞을 경우
					// name
					//아예 x 
					//
					else
					{
						searchTrue = 0;
						break;
					}

				}
				//단어 찾았을 경우 count 1 추가 후 다음 단어로 넘어감.
				if (searchTrue) {
					count++;
				}
				searchTrue = 0;//초기화


			}
			coursor++;
		}

		printf("Result %d: %d\n",j+1, count);
		count = 0;//count초기화
		//coursor 초기화 
		coursor = 0;
	}
	return 0;
}