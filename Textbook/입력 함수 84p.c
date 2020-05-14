#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void main()
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	int k;
	k = printf;
	printf("%d\n",k);

	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d / %d = %d\n", x, y, x / y);
	printf("%d %% %d = %d\n", x, y, x % y);

	getchar();

	// 아스키코드가 나옴
	int p;
	p = getchar();
	printf("%d\n", p);
	// 정수와 문자는 서로 변환 가능
	int p;
	p = getchar();
	printf("%c\n", p);

	return 0;
}