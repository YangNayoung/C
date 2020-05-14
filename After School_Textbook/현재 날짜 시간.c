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
		printf("현재 날짜와 시간 : %s\n", asctime(d));
		printf("현재 날짜와 시간 : %s\n", ctime(&now));
	}
	return 0;
} 