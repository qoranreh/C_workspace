#include <stdio.h>
#include <string.h>
#define Max 50
#define Max2 300

//�Էµ����� ����. 
struct datacase{
	char c1[Max], c2[Max], c3[Max], c4[Max2], c5[Max2];
	char s1[20], s2[20];
}DataCase;

char search[4] = "name";
int main(void) {
	//����ü �ʱ�ȭ
	strcpy(DataCase.c1, "Is yout name Bob?");
	strcpy(DataCase.c2, "No, my name is Rob.");
	strcpy(DataCase.c3,"Hello, Rob.");
	strcpy(DataCase.c4, "A thief named hong gil dong lived with friends named hong gil don and hong gil ja in a village named hong gil dong villang.");
	strcpy(DataCase.c5, "A thief named hong gil dong lived with friends named hong gil don and hong gil ja and hhhong gil dong and kong gil dong and honggil dong and hong gil donggg in a village named hong gil dong village.");
	strcpy(DataCase.s1, "name");
	strcpy(DataCase.s2, "hong gil dong");
	char coursor = 0;
	int count = 0;
	int searchTrue = 0;
	char Data[Max];//String���� 
	char SearchStr[Max];//search String ���� 

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

		while (Data[coursor] != "\0") {//���� ���������� �ݺ�. 
			if (Data[coursor] == 'n') {//ù���� �Ǻ� 

				//windowsearch ���� 
				for (int i = 0; i < strlen(SearchStr); i++) {//4���ݺ�. 
					//4���� ���� ��� �ݺ� ���� �� ��� ���. 
					if (Data[coursor + i] == SearchStr[i]) {
						searchTrue = 1;
					}
					// �ȸ��� ���
					// name
					//�ƿ� x 

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

		printf("%d\n", count);
	}
	return 0;
}