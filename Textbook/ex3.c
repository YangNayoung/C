#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main()
{
	int menu, su1, su2;
	int(*calc[4])(int, int) = { add, subtract,multply,divide }; 
	printf("계산할 연산식을 고르세요.\n");
	printf("1.덧셈  2.뺄셈  3.곱셈  4.나눗셈\n");
	scanf("%d", &menu);
	printf("계산할 두 수를 입력하세요. ");
	scanf("%d", &su1);
	scanf("%d", &su2);
	int sum = calc[menu-1](su1, su2);
	printf("연산 결과는 %d입니다.\n", sum);
	// pritnf("함수의 주소 : %p", add);
	return 0;
}