#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define Max 50
#define Max2 500

//�Էµ����� ����. 
struct datacase {
	char c1[Max], c2[Max], c3[Max], c4[Max2], c5[Max2], c6[Max2], c7[Max2];
	char s1[20], s2[20], s3[20], s4[20], s5[20], s6[20], s7[20];
}DataCase;

int main(void) {
	//����ü �ʱ�ȭ
	strcpy(DataCase.c1, "hello mister monkey");
	strcpy(DataCase.c2, "hello mister monkey");
	strcpy(DataCase.c3, "hello mister monkey");
	strcpy(DataCase.c4, "my name is lee jongho");
	strcpy(DataCase.c5, "my name is lee jongho");
	strcpy(DataCase.c6, "My name is hong gil dong. My brother is hong je dong. My sister is hong gilja, and her friend is hongdong.");
	strcpy(DataCase.c7, "A thief named hong gil dong lived with friends named hong gil don and hong gil ja and hhhong gil dong and kong gil dong and hong gil dong and hong gil donggg in a village named hong gil dong village.");
	strcpy(DataCase.s1, "money");
	strcpy(DataCase.s2, "mon*ey");
	strcpy(DataCase.s3, "m*y");
	strcpy(DataCase.s4, "lee *ho");
	strcpy(DataCase.s5, "lee *ha");
	strcpy(DataCase.s6, "hong*dong");
	strcpy(DataCase.s7, "hong *dong");



	int coursor = 0;
	int count = 0;
	int searchTrue = 0;
	char Data[Max2];//String���� 
	char SearchStr[Max];//search String ���� 

	for (int j = 0; j < 5; j++)
	{
		if (j == 0)
		{
			strcpy(Data, DataCase.c1);
			strcpy(SearchStr, DataCase.s1);
		}

		else if (j == 1)
		{
			strcpy(Data, DataCase.c2);
			strcpy(SearchStr, DataCase.s1);

		}
		else if (j == 2)
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

		while (Data[coursor] != '\0') {//���� ���������� �ݺ�. 
			if (Data[coursor] == SearchStr[0]) {//ù���� �Ǻ� 
				//windowsearch ���� 
				for (int i = 0; i < strlen(SearchStr); i++) {//4���ݺ�. 
					//4���� ���� ��� �ݺ� ���� �� ��� ���. 
					if (Data[coursor + i] == SearchStr[i]) {
						searchTrue = 1;
					}
					// �ȸ��� ���
					// name
					//�ƿ� x 
					//
					else
					{
						searchTrue = 0;
						break;
					}

				}
				//�ܾ� ã���� ��� count 1 �߰� �� ���� �ܾ�� �Ѿ.
				if (searchTrue) {
					count++;
				}
				searchTrue = 0;//�ʱ�ȭ


			}
			coursor++;
		}

		printf("Result %d: %d\n", j + 1, count);
		count = 0;//count�ʱ�ȭ
		//coursor �ʱ�ȭ 
		coursor = 0;
	}
	return 0;
}