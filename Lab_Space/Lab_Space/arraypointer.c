#include <stdio.h>
#include <ctype.h>

int main(void) {

	char *p,s[20];
	gets_s(s, 20);
	for (p = s;*p!='\0'; ++p) {//p++��� ���� 
		if (*p == 'a')
			*p = toupper(*p);
		printf("%c",*p);
			
	}
	
	//�̰� �̿��ؼ� s �� �� �Ҵ��Ű�� ������
	//p�� s�� �ּҸ� 4�� �����ؾ��ϴ°ǰ�?
	//������ ������ �����ؼ� �����ؾ��ϳ�? ����

	//s�� ���� �ȵ� ex) s++ 
	return 0;
}