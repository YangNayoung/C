// ���� �迭 �ʱ�ȭ�Ͽ� ���
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

// ���ڿ� �迭 �ʱ�ȭ�Ͽ� ���
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

/* ���ڿ� ���ڿ� �迭�� scanf() �Լ��� �Է� �� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a[20];
	printf("���ڿ� �Է�?: ");
	scanf("%s", a);
	printf("�Է� ���ڿ� ���!: %s\n", a);
	printf("2��° ���� ���!: %c\n", a[1]);

	printf("�Է� ���ڿ� ���!: %s\n", &a[3]);
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