/* ¡÷ªÁ¿ß 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(void)
{
	int num;
	int cnt[6] = { 0 };
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 300; i++) {
		num = rand() % 6 + 1;
		cnt[num - 1]++;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d: ",i + 1);
		for (int j = 0; j < cnt[i]; j++)
			printf("*");
		printf("\n");
	}

	return 0;
} */
/**
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(void)
{
	int i, j, lotto[6];
	srand((unsigned)time(NULL));
	for (i = 0; i <= 5; i++) {
		lotto[i] = rand() % 45 + 1;
		for (j = 0; j < i; j++)
		{
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
	}
	for (i = 0; i <= 5; i++)
		printf("%2d\n", lotto[i]);

	return 0;
} */