// ���ĺ� �빮�ڸ� �ҹ��ڷ� �μ��ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char Ee;
	printf("�빮�� �Է� : ");
	scanf("%c", &Ee);
	if (Ee < 65 || Ee>90) 
		printf("���� �Է� ���� : ���� �빮�ڸ� �Է��ϼ���.\n");
	else
		printf("�ҹ��� ��ȯ : %c\n", Ee=Ee+32);
}