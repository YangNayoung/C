#include<stdio.h>
#pragma warning(disable:4996)
/* int main(void)
{
	int dec = 30, oct = 012, hex = 0x5E;
	printf("세 개의 정수를 각각 다음과 같이 입력하세요.");
	printf("십진수 - 팔진수 - 십육진수\n");

	scanf("%d - %o - %x", &dec, &oct, &hex);
	printf("\n입력한 수는 다음과 같습니다.\n");
	printf("%d - %o - %x\n", dec, oct, hex);
	printf("%d - %o - %x\n", dec, oct, hex);

	return 0;
}*/

int main(void)
{
	int a, b, c;
	a = b = c = 5;

	printf("a = a + 2 ==> %d\n", a = a + 2);
	printf("a ==> %d\n", a);
	printf("a = b + c ==> %d\n", a = b + c);
	printf("a ==> %d\n", a);

	return 0;
}