// 문자 배열 초기화하여 출력
/* 
#include <stdio.h>

int main()
{
	char d[7] = { 'd','i','g','i','t','a','l' };
	int i;
	for (i = 0; i < 7; i++)
		printf("%c\n", d[i]);

	printf("%s", d);

	return 0;
}
*/

// 문자열 배열 초기화하여 출력
/*
#include <stdio.h>

int main()
{
	char a[9] = "language";
	char b[] = "program";
	printf("%s\n", a);
	printf("%s\n", b);

	return 0;
}
*/

/* 문자와 문자열 배열을 scanf() 함수로 입력 후 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a[20];
	printf("문자열 입력?: ");
	scanf("%s", a);
	printf("입력 문자열 출력!: %s\n", a);
	printf("2번째 문자 출력!: %c\n", a[1]);

	printf("입력 문자열 출력!: %s\n", &a[3]);
	return 0;
}
*/

#include <stdio.h>

int main()
{
	char a[] = "MyClass";
	printf("%s\n", a);
	printf("%s\n", &a[2]);

}