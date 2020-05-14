#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y);
int menu_display(void);
int sub_menu_display1(void);
int sub_menu_display2(void);
void sub_menu(void);
void sub_menu2(void);
void guguall(void);
void gugusel(void);
void press_key(void);
void test3_1(void);
void test3_2(void);
void test3_3(void);
void test3_4(void);
void anykey(void);


int main(void) 
{
	int c;
	while ((c = menu_display()) != 3) {
		switch (c) {
		case 1:
			sub_menu();
			break;
		case 2:
			sub_menu2();
			break; 
		default:break;
		}
	}
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int menu_display(void) 
{
	int sel;
	system("cls");
	printf("������ �н� ���α׷�\n\n");
	printf("1. ������ ���� \n");
	printf("2. ������ ����\n");
	printf("3. ����\n\n");
	printf("�޴���ȣ �Է�>>");
	sel = _getch() - 48;
	return sel;
}

int sub_menu_display1(void) 
{
	int sel;
	system("cls");
	printf("������ ����\n\n");
	printf("1. ���ϴ� �� ���� \n");
	printf("2. ��ü ����\n");
	printf("3. ���� �޴��� �̵�\n\n");
	printf("�޴���ȣ �Է�>>");
	sel = _getch() - 48;
	return sel;
}

int sub_menu_display2(void) {
	int sel;
	system("cls");
	printf("������ ���� Ǯ��\n\n");
	printf("1.  ����Ǯ�� (Ʋ������ �ٽ� Ǯ��)\n");
	printf("2.  ����Ǯ�� (���ѽð� ����)\n");
	printf("3.  ����Ǯ�� (�� ������ Ǭ �ð� ǥ��)\n");
	printf("4.  ���� Ǯ�� (�� ���� ������ ǥ��)\n");
	printf("5.  ���� �޴��� �̵�\n");
	sel = _getch() - 48;
	return sel;
}

void press_key(void) 
{
	printf("\n\n�ƹ�Ű�� ������ ���� �޴���...");
	_getch();
}

void guguall(void) 
{
	int i, j;
	system("cls");
	printf("������ ��ü ���\n\n");
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d*%d=%2d  ", j, i, j*i);
		}
		printf("\n");
	}
	system("PAUSE");
	press_key();
}

void gugusel(void) {
	int i, dan;
	system("cls");
	printf("���ϴ� �ܸ� ���\n\n ");
	printf("����� ���� �Է��ϰ� Enter> ");
	scanf("%d", &dan);
	for (i = 1; i <= 9; i++)
		printf("%d*%d=%2d \n", dan, i, dan*i);
	system("PAUSE");
	press_key();
}

void sub_menu(void)
{
	int c;
	while ((c = sub_menu_display1()) != 3) {
		switch (c)
		{
		case 1: gugusel(); 
			break;
		case 2: guguall(); 
			break;
		default:
			break;
		}
	}
}

void sub_menu2(void)
{
	int c;
	while ((c = sub_menu_display2()) != 5) {
		switch (c)
		{
		case 1: test3_1();
			break;
		case 2: test3_2();
			break;
		case 3: test3_3();
			break;
		case 4: test3_4();
			break;
		default:
			break;
		}
	}
}


void test3_1(void)
{
	system("cls");
	int x[11], y[11], dap[11];
	char check[11];
	srand((unsigned)time(NULL));
	int count = 0;

	for (int i = 1; i <= 10; i = i + 1) {
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
	}

	for (int i = 1; i <= 10; i++) {
		gotoxy(10, i + 5);
		printf("����%2d > %d*%d=? ", i, x[i], y[i]);
	}

	for (int i = 1; i <= 10; i++) {
		gotoxy(25, i + 5);
		scanf("%d", &dap[i]);
		if (dap[i] == x[i] * y[i]) {
			count = count + 1;
			check[i] = '0';
		}
		else
			check[i] = 'X';
		gotoxy(28, i + 5);
		printf("%c", check[i]);
	}

	system("cls");
	printf("Ʋ������ �ٽ�Ǯ��\n\n");

	for (int i = 1; i <= 10; i++) {
		if (check[i] == 'X') {
			gotoxy(10, i + 5);
			printf("����%2d > %d*%d=? ", i, x[i], y[i]);
			gotoxy(25, i + 5);
			scanf("%d", &dap[i]);
		}
	}
	press_key();
} 
/*
void test3_1(void) {
	system("cls");
	int x, y[11], dap[11];
	char check[11];
	srand((unsigned)time(NULL));
	int count = 0;

	printf("���ϴ� �� �Է� : ");
	scanf("%d", &x);

	for (int i = 1; i <= 10; i = i + 1) {
		y[i] = 0+i;
	}

	for (int i = 1; i <= 10; i++) {
		gotoxy(10, i + 5);
		printf("����%2d > %d*%d=?", i, x, y[i]);
	}

	for (int i = 1; i <= 10; i++) {
		gotoxy(25, i + 5);
		scanf("%d", &dap[i]);
		if (dap[i] == x* y[i]) {
			count = count + 1;
			check[i] = '0';
		}
		else
			check[i] = 'X';

		gotoxy(28, i + 5);
		printf("%c", check[i]);
	}
	system("cls");
	printf("Ʋ������ �ٽ�Ǯ��\n\n");

	for (int i = 1; i <= 10; i++) {
		if (check[i] == 'X') {
			gotoxy(10, i + 5);
			printf("����%2d > %d*%d=? ", i, x, y[i]);
			gotoxy(25, i + 5);
			scanf("%d", &dap[i]);
		}
	}
	press_key();
} */

void test3_2(void)
{
	//  int min;
	time_t fi, si;
	// �ǽ¼� x, �¼� y, ����� �Է°�dap,��
	//
	int x[11], y[11], dap[11];
	// ���� �������� count, ��ȯ ���� i
	// �� �ð� ���� timesum, ���ѽð�timecheck
	int count, i, timesum, timecheck;
	// ä����� ����
	char check[11];
	system("cls");
	gotoxy(10, 2);
	printf("����ڰ� ������ ���ѽð� ���� ����Ǯ��");
	gotoxy(10, 3);
	printf("���ѽð�(��)�� �Է��ϼ���");
	scanf("%d", &timecheck);

	//���� ����(����)
	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
	}

	//���� ���
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("���� %2d>  %d*%d=? \n", i, x[i], y[i]);
	}
	count = 0;
	//���� Ǯ�� ���� ��� ������ Ʋ�ȴٰ�(X) ������
	for (i = 1; i <= 10; i++)
		check[i] = 'X';
	//���� �ð� ����
	time(&fi);
	//������� �� �Է�
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(25, i + 5);
		scanf("%d", &dap[i]);
		if (dap[i] == x[i] * y[i])
		{
			count = count + 1;
			check[i] = 'O';
		}
		else
			check[i] = 'X';
		time(&si);
		timesum = si - fi;
		gotoxy(10, 4);
		printf(" ����ð� : %2d �� ", timesum);
		//����ð� ��
		if (timesum>timecheck)
		{
			gotoxy(10, 17);
			printf("���ѽð��� �Ѱ���ϴ�!");
			break;
		}
	}
	//���� ���
	gotoxy(10, 18);
	printf("����� ������ %d �� �Դϴ�.", count * 10);

	//ä����� ǥ��
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(27, i + 5);
		printf("%c ", check[i]);
	}
	gotoxy(10, 19);
	printf("�����ϼ̽��ϴ�.");
	system("PAUSE");
}

void test3_3(void)
{
	//  int min;
	time_t fi, si;
	// �ǽ¼� x, �¼� y, ����� �Է°�dap,��
	//
	int x[11], y[11], dap[11];
	// ���� �������� count, ��ȯ ���� i
	// �� �ð� ���� timesum, ���ѽð�timecheck
	int count, i, timesum;
	// ä����� ����
	char check[11];
	system("cls");
	gotoxy(10, 2);
	printf("������ Ǭ �� �ð� ǥ��");
	gotoxy(10, 3);

	//���� ����(����)
	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
	}

	//���� ���
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("���� %2d>  %d*%d=? \n", i, x[i], y[i]);
	}
	count = 0;
	//���� Ǯ�� ���� ��� ������ Ʋ�ȴٰ�(X) ������
	for (i = 1; i <= 10; i++)
		check[i] = 'X';
	//���� �ð� ����
	time(&fi);
	//������� �� �Է�
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(25, i + 5);
		scanf("%d", &dap[i]);
		if (dap[i] == x[i] * y[i])
		{
			count = count + 1;
			check[i] = 'O';
		}
		else
			check[i] = 'X';
		time(&si);
		timesum = si - fi;
		gotoxy(10, 4);
		printf(" ����ð� : %2d �� ", timesum);
	}
	//���� ���
	gotoxy(10, 18);
	printf("����� ������ %d �� �Դϴ�.", count * 10);

	//ä����� ǥ��
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(28, i + 5);
		printf("%c ", check[i]);
	}

	gotoxy(10, 19);
	printf("������ Ǫ�µ� �ɸ� �� �ð��� : %d�� �Դϴ�.\n", timesum);
	printf("�����ϼ̽��ϴ�.");
	system("PAUSE");
	system("cls");

}

void test3_4(void)
{
	int nujuk[11] = { 0 };
	float checkdan[11] = { 0 };

	// �ǽ¼� x, �¼� y, ����� �Է°� dap
	int x[11], y[11], dap[11];
	// ���� �������� count, ��ȯ ���� i
	int count, i, sum = 0;
	// ä����� ����
	char check[11];

	//���� ����(����), �ش���� ������ �������� �������� nujuk�迭�� ����
	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
		nujuk[x[i]] = nujuk[x[i]] + 1;
	}

	// ���� 10�� ���
	system("cls");
	{
		gotoxy(15, 3);
		printf(" �� ���� ������  ǥ��");
	}
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("���� %2d>  %d*%d=? \n", i, x[i], y[i]);
	}
	//������� �� �Է�
	count = 0;
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(25, i + 5);
		scanf("%d", &dap[i]);
		if (dap[i] == x[i] * y[i])
		{
			count = count + 1;
			check[i] = 'O';
			//������ Ư������ ������ ���� ��� �������� checkdan�� ������Ŵ
			checkdan[x[i]] = checkdan[x[i]] + 1;
		}
		else
			check[i] = 'X';
	}

	//���� ���
	gotoxy(15, 17);
	printf(" ����� ������ %d ��(50�� ����)�Դϴ�.", count * 10);
	//ä����� OXǥ��
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(27, i + 5);
		printf("%c", check[i]);
	}

	gotoxy(15, 18);
	printf("�ƹ�Ű�� ������ �� ���� �������� ǥ���մϴ�. \n");
	_getch();

	//system("cls");
	for (i = 1; i <= 9; i++)
	{
		// �������� ������ ��Ÿ���Ƿ� ������ Ư������ �������� 0�� ����
		// �׷��� ���� ���� ������ ���
		if (nujuk[i] == 0)
			printf("%2d��:����������  0:\n", i);
		else
			//printf("%2d��:����������%3d:������ %3.0f\n", i, nujuk[i], (checkdan[i] / nujuk[i]) * 100);
			printf("%2d��:����������%3d:������ %3.0f\n", i, nujuk[i], (checkdan[i] / 10) * 100);
	}
	system("PAUSE");
}

void anykey(void)
{
	gotoxy(10, 23);
	printf("�ƹ�Ű�� ������ �޴��� �̵�");
	_getch();
}
