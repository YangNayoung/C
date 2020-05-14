/*
#include <stdio.h>

int my_atoi(char *st) 
{
	int length = strlen(st), i, sum = 0, dec = 1;
	for (i = length - 1; i >= 0; i--) {
		sum += (st[i] - '0')*dec;
		dec *= 10;
	}
	return sum;
}

int main(void)
{
	char *st[6] = { '1','2','3','4','5' };

	my_atoi(*st);
} */
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "abxdefg";
	char s2[] = "012";
	
	strcpy(s1 + 3, s2, strlen(s2)); // memmove, memcpy 같은 결과 나옴
	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char d[15] = "love";
	char s[6] = "holic";

	strcat(d, s);
	printf("strcat ");
} */
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s1 = "salad";
	char *s2 = "salary";
	int ptr;

	ptr = strcmp(s1, s2);
	printf("strcmp의 값: %d\n", ptr);
	ptr = strncmp(s1, s2, 2);
	printf("strncmp 결과\n");

	if (ptr > 0)
		printf("문자열 s1이 s2보다 크다.\n");
	else if (ptr < 0)
		printf("문자열 s1이 s2보다 작다.\n");
	else
		printf("문자열 s1과 s2가 같다.\n");

	return 0;
} */
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s1 = "This is a string";
	char *s2 = "st";
	char *ptr;

	ptr = strstr(s1, s2);
	printf("string : %s\n", s1);
	printf("%s로 시작하는 s1의 \n나머지 문자열 : %s\n", s2, ptr);
	ptr = strpbrk(s1, s2);
	printf("첫 문자가 일치하는 s1의 \n나머지 문자열 : %s\n", ptr);

	return 0;
} */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *a1 = "9456123";
	char *a2 = "4096257";
	char *a2 = "8563271";
	int length;
	printf("a1: %s\n", a1);
	printf("a2: %s\n", a2);

	length = strspn(a1, a2);
	printf("공톤된 문자열의 길이: %d\n", length);
	printf("a1: %s\n", a1);
	printf("a3: %s\n", a3);

	length = strcspn(a1, a3);
	printf("공통되지 않는 문자열의 길이: %d\n", length);

	return 0;
}