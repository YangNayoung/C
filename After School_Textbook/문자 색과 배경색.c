#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <conio.h>

void text_color(char attr[])
{
	char dos_command[9];
	sprintf(dos_command, "color %s", attr);
	system("cls");
	system(dos_command);
}

int main(void)
{
	char attr[3];
	system("help color");
	printf("입력 후 Enter> ");
	scanf("%s", attr);
	text_color(attr);
	printf("바탕색과 문자색의 변경을 확인합니다.\n");

	return 0;
}