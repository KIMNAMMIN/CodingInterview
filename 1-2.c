/* 널 문자로 끝나는 문자열을 뒤집는 reverse 함수를 구현하여라
사고의 과정: temp를 두고 맨 끝과 맨 처음을 교환한다, 문자열이 몇개의 문자로 이루어졌는지 먼저알아야하나?
abc 면 cba 가운데껀 그대로 두고, index는 012 네. length는 3이 나올거고. 
ab면 ba index 01. length는 2 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char* str);
int main() {
	char str[] = "abcd";
	reverse(str);
	printf("\n%s", str);
}
void reverse(char* str) {
	char temp;//교환하기위한.
	int start=0, end;
	
//내가 알기론 길이가 못넘어오는데가 아니라 길이 넘어오는데? 나는 무슨 지식을 가지고있던거지
	
	printf("%d", strlen(str));
	end = strlen(str)-1;
	
	for (; start < end; start++,end--) {
		temp = str[end];
		str[end] = str[start];
		str[start] = temp;
	}
	printf("\n%s", str);

}

/*잘못된정보를 너무 많이 알고있다 나뮈나
더불어서 직접 키보드로 입력 받았을 때 어떻게 구현해야되는지 알아보자.
*/
