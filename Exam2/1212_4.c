#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(char *s) {
	int len = strlen(s);
	char *p = (char *)malloc(len + 1);

	for (int i = len - 1; i >= 0; i--)
		p[len - 1 - i] = s[i];
	p[len] = '\0';

	return p;
}

int main()
{
	char str[100];
	printf("������ �Է� : ");
	gets_s(str,100);
	printf("��ȯ�� ���� : %s\n", reverse(str));

	return 0;
}