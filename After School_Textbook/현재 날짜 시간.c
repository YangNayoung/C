#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	time_t now;
	time(&now);
	struct tm *d;
	while (!_kbhit())
	{
		system("cls");
		now = time(NULL);
		d = localtime(&now);
		printf("���� ��¥�� �ð� : %s\n", asctime(d));
		printf("���� ��¥�� �ð� : %s\n", ctime(&now));
	}
	return 0;
} 