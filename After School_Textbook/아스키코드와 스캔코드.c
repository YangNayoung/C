#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	char chr;
	do {
		printf("�ش� Ű�� �����ÿ�> ");
		chr = _getch();
		printf("\nŰ: %c, ASCII(10) : %d, (16) : %x\n", chr, chr, chr);
	} while (chr != 0);

	return 0;
}