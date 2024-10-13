#include <stdio.h>
#include <string.h>

int main(void) {
	//문자가 주어지면 모든 문자를 찾아라 찾는문자와 동일한
	//
	int cursor = 0;//한문자 아드반스 한다?
	int i = 0;//글자를 찾는데 
	char string[300];
	gets_s(string, 300);
	char search_string[30] = "hong gil dong";
	int mathchfound = 0;

	while (mathchfound == 0) {
		
			if (string[cursor] == search_string[i]) {//h 와 h 일치할때 cursor 부분만 남기고 searchstring계속 반복해야함 . 
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

//자 일단 문장을 받자 
//단어 수색을 어떻게 하냐
//-문장을 단어로 끊고 단어를 모두 모아서 단어 맨 앞글자 알파벳만 수색하기
//-문장 전체를 일치/불일치로 넘기고 일치 안하는 순간 계산.
//일단 후자부터 가기.

//코드분석,
//일단 두 문장을 글자로 단순하게 비교하는 듯함.
//한글자<=전체 string비교 이런식?



//8==0
//9==1
//쭉쭊쭉
//15==8
//i==8 매치 파운드
///n이면 커서만 증가됨 = 다음단어로 넘어감 
//s
// 
// A theif named hong gil dong lived with friends named hong gil don and hong gil ja in a village named hong gil dong village
//h 이면 문장과 판별 시작하고 끝까지 일치하면 매치파운드 하고 종료되야함.