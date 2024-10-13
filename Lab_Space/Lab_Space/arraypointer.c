#include <stdio.h>
#include <ctype.h>

int main(void) {

	char *p,s[20];
	gets_s(s, 20);
	for (p = s;*p!='\0'; ++p) {//p++사용 ㄴㄴ 
		if (*p == 'a')
			*p = toupper(*p);
		printf("%c",*p);
			
	}
	
	//이거 이용해서 s 에 값 할당시키고 싶은데
	//p가 s의 주소면 4씩 증가해야하는건가?
	//포인터 변수를 선언해서 접근해야하나? ㅇㅇ

	//s는 연산 안됨 ex) s++ 
	return 0;
}