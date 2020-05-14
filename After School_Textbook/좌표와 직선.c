/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void draw_xy_line01(int a, int b)
{
	int x, y;
	for (x = 1; x <= 10; x += 1) {
		y = a * x + b;
		gotoxy(x, y);
		printf("*");
	}
}

int main(void)
{
	int a, b;
	printf("y=ax+v의 직선 식을 좌표에 출력\n");
	printf("기울기 a입력> ");
	scanf("%d", &a);

	printf("절편 b입력> ");
	scanf("%d", &b);
	system("cls");
	draw_xy_line01(a, b);
	printf("\n");

	return 0;
} */
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void draw_xy_line01(int a, int b)
{
	int x, y, xt, yt;
	for (x = 0; x <= 5; x += 1) {
		y = a * x + b;
		yt = y + 1;
		xt = 2 * x + 1;
		gotoxy(xt, yt);
		printf("*");
	}
}

void axis(void)
{
	int i;
	for (i = 1; i <= 24; i += 1) {
		gotoxy(39, i);
		printf("|");
	}
	for (i = 1; i <= 79; i += 1) {
		gotoxy(i, 12);
		printf("-");
	}
	gotoxy(39, 12);
	printf("+");
}

int main(void)
{
	int a, b;
	printf("y=ax+v의 직선 식을 좌표에 출력\n");
	printf("기울기 a입력> ");
	scanf("%d", &a);

	printf("절편 b입력> ");
	scanf("%d", &b);
	system("cls");
	draw_xy_line01(a, b);
	printf("\n");

	return 0;
} */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void draw_xy_line01(int a, int b)
{
	int x, y, xt, yt;
	gotoxy(1, 1);
	printf("y=%dx%+d\n", a, b);
	for (x = 5; x <= 5; x += 1) {
		y = a * x + b;
		xt = 39 + 2 * x;
		yt = 12 - y;
		if ((1 <= yt) && (yt <= 23)) {
			gotoxy(xt, yt);
			printf("*");
		}
	}
}

void axis(void)
{
	int i;
	for (i = 1; i <= 24; i += 1) {
		gotoxy(39, i);
		printf("|");
	}
	for (i = 1; i <= 79; i += 1) {
		gotoxy(i, 12);
		printf("-");
	}
	gotoxy(39, 12);
	printf("+");
}

int main(void)
{
	int a, b;
	printf("y=ax+b의 직산 식을 좌표에 출력\n");
	printf("기울기 입력> ");
	scanf("%d", &a);
	printf("절편 입력> ");
	scanf("%d", &b);
	system("cls");
	axis();
	draw_xy_line01(a, b);
	gotoxy(1, 23);
	printf("\n");

	return 0;
}