#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char str[256];
	char *p = NULL;
	char *q = NULL;
	int len, i;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);
	len = strlen(str);
	p = str;
	q = str + (len - 1);
	for (i = len; i > len / 2; i--, p++, q--)
	{
		char temp = *p;
		*p = *q;
		*q = temp;
	}
	printf("�������� ���ڿ� : %s\n", str);

	return 0;
}