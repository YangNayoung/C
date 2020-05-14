#include <stdio.h>
#pragma warning(disable:4996)

/*int main(void)
{
	float pi;
	scanf("%f", &pi);
	printf("%f\n", pi);

	char ch;
	printf("문자를 입력하세요.\n");
	scanf(" %c", &ch);
	printf("ch=%c\n", ch);
}*/

int main(void)
{
	char a;

	puts("문자 하나 입력");
	a = getchar();
	putchar(a);
	printf("열심으로 합시다!!!");

	return 0;
}