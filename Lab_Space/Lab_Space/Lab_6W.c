#include <stdio.h>
#include <string.h>

int main(void) {
	//���ڰ� �־����� ��� ���ڸ� ã�ƶ� ã�¹��ڿ� ������
	//
	int cursor = 0;//�ѹ��� �Ƶ�ݽ� �Ѵ�?
	int i = 0;//���ڸ� ã�µ� 
	char string[300];
	gets_s(string, 300);
	char search_string[30] = "hong gil dong";
	int mathchfound = 0;

	while (mathchfound == 0) {
		
			if (string[cursor] == search_string[i]) {//h �� h ��ġ�Ҷ� cursor �κи� ����� searchstring��� �ݺ��ؾ��� . 
				printf("%c", string[cursor]);
				printf("%c", search_string[i]);
				while (string[cursor] == search_string[i]) {
					if (i == strlen(search_string))
					{
						printf("matchfound");
						mathchfound = 1;
						i = 0;

					}
					else i++;
				}

			
		}
		cursor++;
	}
	return 0;
}

//�� �ϴ� ������ ���� 
//�ܾ� ������ ��� �ϳ�
//-������ �ܾ�� ���� �ܾ ��� ��Ƽ� �ܾ� �� �ձ��� ���ĺ��� �����ϱ�
//-���� ��ü�� ��ġ/����ġ�� �ѱ�� ��ġ ���ϴ� ���� ���.
//�ϴ� ���ں��� ����.

//�ڵ�м�,
//�ϴ� �� ������ ���ڷ� �ܼ��ϰ� ���ϴ� ����.
//�ѱ���<=��ü string�� �̷���?



//8==0
//9==1
//�ߧ���
//15==8
//i==8 ��ġ �Ŀ��
///n�̸� Ŀ���� ������ = �����ܾ�� �Ѿ 
//s
// 
// A theif named hong gil dong lived with friends named hong gil don and hong gil ja in a village named hong gil dong village
//h �̸� ����� �Ǻ� �����ϰ� ������ ��ġ�ϸ� ��ġ�Ŀ�� �ϰ� ����Ǿ���.