// �б��� �̸��� �Է��Ͽ� �μ��ϴ� ���α׷� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s[10];
	printf("�б����� �Է� : ");
	scanf("%s", &s);

	char name[10];
	printf("�̸� �Է� : ");
	scanf("%s", &name);

	printf("%s �л��� %s �б��� �ٴմϴ�.\n ", name, s);
}