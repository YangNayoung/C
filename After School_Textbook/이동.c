#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#define X_MAX 79
#define Y_MAX 24

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void move_arrow_key(char key, int *x1, int *y1, int x_b, int y_b)
{
	switch (key)
	{
	case 72: *y1 = *y1 - 1; // 위쪽 방향의 화살표 키
		if (*y1 < 1)
			*y1 = 1; // y좌표의 최소값
		break;
	case 75: *x1 = *x1 - 1; // 왼쪽 방향의 활살표 키
		if (*x1 < 1)
			*x1 = 1; // x좌표의 최소값
		break;
	case 77: *x1 = *x1 + 1; // 오른쪽 방향의 활살표 키
		if (*x1 > x_b)
			*x1 = x_b; // x좌표의 최대값
		break;
	case 80: *y1 = *y1 + 1; // 아래쪽 방향의 화살표 키
		if (*y1 > y_b)
			*y1 = y_b; // y좌표의 최대값
		break;
	default:
		return;
	}
}