/* 1.1 문자열에 포함된 문자들이 전부 유일한지를 검사하는 알고리즘을 구현하라. 다른 자료구조를 사용할 수 없는 상황이라면 어떻게 하겠는가?
 배열이라는 다른 자료구조를 사용해버린거같다. 
 지금 내가 짠 코드는 큌정렬포함해서 빅오 nlogn의 시간복잡도를 가지는데
 만약 배열을 사용 할 수 없다면 n^2의 시간복잡도로 해결이 가능할 것 같다(brute force)
*/
#include<stdio.h>
#include<stdlib.h>	//qsort 이용하기위해 추가
#include<string.h>
int compare(const void* a, const void* b) {

	if (*(char*)a > *(char*)b) return 1;
	else if (*(char*)a == *(char*)b) return 0;
	else return -1;
}
int main() {
	char a[] = "asdfgqwertyuip";
	unsigned int i;
	int num = sizeof(a) / sizeof(a[0]);
	
	qsort((void*)a, (size_t)num-1, sizeof(char),compare);

	printf("%s", a);

	for (i = 0; i < strlen(a) - 1; i++) {
		
		if (a[i] == a[i + 1]) {
			printf("중복된거 있다.");
			return 0;
		}

	}
	printf("중복된거 없다.");
	return 0;

}
/* 이상했던 점, strlen의 함수 반환값은 size_t이고 size_t는 unsigned int 라고 한다
그래서 unsigned int 로 i를 선언했는데 문제는 없나? 사실 사이즈에는 음수가 없으므로
unsigned가 맞다. 바꿔주자 컴파일은 되나 경고는 계속 뜨게된다.
그리고 퀵소트는 볼때마다 찾아본다 그러지말고 그냥 외우자.*/
