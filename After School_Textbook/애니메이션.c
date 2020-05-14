/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y);

int main(void)
{
	int x, y = 1;
	for (x = 1; x < 70; x += 2) {
		system ("cls");
		gotoxy(x, y);
		printf("%");
		Sleep(50);
	}
	printf("\n");
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
} */
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y);

int main(void)
{
	int x = 0, y = 1, temp = 2, count = 0;
	while (count<3)
	{
		x += temp;
		if (x > 20)
			temp = -2;
		if (x < 2) {
			temp = 2;
			count++;
		}
		system("cls");
		gotoxy(x, y);
		printf("¡à");
		Sleep(50);
	}
	
	printf("\n");
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
} */
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void gotoxy(int x, int y);

int main(void) 
{
	int x, y = 1, count = 0;
	for (x = 1; x < 70; x+=2) {
		system("cls");
		gotoxy(x, y);
		if (count % 3 == 0)
			printf("¡ß");
		else {
			printf("¡á");
		}
		count++;
		Sleep(50);
	}
	printf("\n");
	return 0;
}

void gotoxy(int x, int y) 
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
} */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void gotoxy(int x, int y);

int main(void)
{
	int y, check = 24;
	do {
		for (y = 25 - check; y = 24; y += 1) {
			gotoxy(20, y);
			printf("¡Ü");
			Sleep(50);
			gotoxy(20, y);
			system("cls");
		}
		check = (check = check / 2);
		for (y = 24; y > 24 - check; y -= 1) {
			gotoxy(20, y);
			printf("¡Ü");
			Sleep(70);
			gotoxy(20, y);
			system("cls");
		}
	} while (check != 1);
	printf("\n");
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}