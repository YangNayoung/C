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
	case 72: *y1 = *y1 - 1; // ���� ������ ȭ��ǥ Ű
		if (*y1 < 1)
			*y1 = 1; // y��ǥ�� �ּҰ�
		break;
	case 75: *x1 = *x1 - 1; // ���� ������ Ȱ��ǥ Ű
		if (*x1 < 1)
			*x1 = 1; // x��ǥ�� �ּҰ�
		break;
	case 77: *x1 = *x1 + 1; // ������ ������ Ȱ��ǥ Ű
		if (*x1 > x_b)
			*x1 = x_b; // x��ǥ�� �ִ밪
		break;
	case 80: *y1 = *y1 + 1; // �Ʒ��� ������ ȭ��ǥ Ű
		if (*y1 > y_b)
			*y1 = y_b; // y��ǥ�� �ִ밪
		break;
	default:
		return;
	}
}

int main(void)
{
	char key;
	int x = 10, y = 5;
	do {
		gotoxy(x, y);
		printf("A");
		key = _getch();
		printf("\b "); // A ǥ�� ������� �ϱ�
		move_arrow_key(key, &x, &y, X_MAX, Y_MAX);
	} while (key != 27);

	return 0;
}