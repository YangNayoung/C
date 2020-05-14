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
	
	strcpy(s1 + 3, s2, strlen(s2)); // memmove, memcpy ���� ��� ����
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
	printf("strcmp�� ��: %d\n", ptr);
	ptr = strncmp(s1, s2, 2);
	printf("strncmp ���\n");

	if (ptr > 0)
		printf("���ڿ� s1�� s2���� ũ��.\n");
	else if (ptr < 0)
		printf("���ڿ� s1�� s2���� �۴�.\n");
	else
		printf("���ڿ� s1�� s2�� ����.\n");

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
	printf("%s�� �����ϴ� s1�� \n������ ���ڿ� : %s\n", s2, ptr);
	ptr = strpbrk(s1, s2);
	printf("ù ���ڰ� ��ġ�ϴ� s1�� \n������ ���ڿ� : %s\n", ptr);

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
	printf("����� ���ڿ��� ����: %d\n", length);
	printf("a1: %s\n", a1);
	printf("a3: %s\n", a3);

	length = strcspn(a1, a3);
	printf("������� �ʴ� ���ڿ��� ����: %d\n", length);

	return 0;
}