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
	printf("구구단 학습 프로그램\n\n");
	printf("1. 구구단 보기 \n");
	printf("2. 구구단 문제\n");
	printf("3. 종료\n\n");
	printf("메뉴번호 입력>>");
	sel = _getch() - 48;
	return sel;
}

int sub_menu_display1(void) 
{
	int sel;
	system("cls");
	printf("구구단 보기\n\n");
	printf("1. 원하는 단 보기 \n");
	printf("2. 전체 보기\n");
	printf("3. 메인 메뉴로 이동\n\n");
	printf("메뉴번호 입력>>");
	sel = _getch() - 48;
	return sel;
}

int sub_menu_display2(void) {
	int sel;
	system("cls");
	printf("구구단 문제 풀기\n\n");
	printf("1.  문제풀기 (틀린문제 다시 풀기)\n");
	printf("2.  문제풀기 (제한시간 내에)\n");
	printf("3.  문제풀기 (각 문제의 푼 시간 표시)\n");
	printf("4.  문제 풀기 (각 단의 성공률 표시)\n");
	printf("5.  메인 메뉴로 이동\n");
	sel = _getch() - 48;
	return sel;
}

void press_key(void) 
{
	printf("\n\n아무키나 누르면 메인 메뉴로...");
	_getch();
}

void guguall(void) 
{
	int i, j;
	system("cls");
	printf("구구단 전체 출력\n\n");
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
	printf("원하는 단만 출력\n\n ");
	printf("출력할 단을 입력하고 Enter> ");
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
		printf("문제%2d > %d*%d=? ", i, x[i], y[i]);
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
	printf("틀린문제 다시풀기\n\n");

	for (int i = 1; i <= 10; i++) {
		if (check[i] == 'X') {
			gotoxy(10, i + 5);
			printf("문제%2d > %d*%d=? ", i, x[i], y[i]);
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

	printf("원하는 단 입력 : ");
	scanf("%d", &x);

	for (int i = 1; i <= 10; i = i + 1) {
		y[i] = 0+i;
	}

	for (int i = 1; i <= 10; i++) {
		gotoxy(10, i + 5);
		printf("문제%2d > %d*%d=?", i, x, y[i]);
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
	printf("틀린문제 다시풀기\n\n");

	for (int i = 1; i <= 10; i++) {
		if (check[i] == 'X') {
			gotoxy(10, i + 5);
			printf("문제%2d > %d*%d=? ", i, x, y[i]);
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
	// 피승수 x, 승수 y, 사용자 입력값dap,각
	//
	int x[11], y[11], dap[11];
	// 맞은 개수누적 count, 순환 변수 i
	// 총 시간 저장 timesum, 제한시간timecheck
	int count, i, timesum, timecheck;
	// 채점결과 저장
	char check[11];
	system("cls");
	gotoxy(10, 2);
	printf("사용자가 지정한 제한시간 내에 문제풀기");
	gotoxy(10, 3);
	printf("제한시간(초)을 입력하세요");
	scanf("%d", &timecheck);

	//문제 생성(출제)
	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
	}

	//문제 출력
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("문제 %2d>  %d*%d=? \n", i, x[i], y[i]);
	}
	count = 0;
	//문제 풀기 전에 모든 문제를 틀렸다고(X) 가정함
	for (i = 1; i <= 10; i++)
		check[i] = 'X';
	//시작 시간 저장
	time(&fi);
	//사용자의 값 입력
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
		printf(" 경과시간 : %2d 초 ", timesum);
		//경과시간 비교
		if (timesum>timecheck)
		{
			gotoxy(10, 17);
			printf("제한시간을 넘겼습니다!");
			break;
		}
	}
	//점수 출력
	gotoxy(10, 18);
	printf("당신의 점수는 %d 점 입니다.", count * 10);

	//채점결과 표시
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(27, i + 5);
		printf("%c ", check[i]);
	}
	gotoxy(10, 19);
	printf("수고하셨습니다.");
	system("PAUSE");
}

void test3_3(void)
{
	//  int min;
	time_t fi, si;
	// 피승수 x, 승수 y, 사용자 입력값dap,각
	//
	int x[11], y[11], dap[11];
	// 맞은 개수누적 count, 순환 변수 i
	// 총 시간 저장 timesum, 제한시간timecheck
	int count, i, timesum;
	// 채점결과 저장
	char check[11];
	system("cls");
	gotoxy(10, 2);
	printf("문제를 푼 총 시간 표시");
	gotoxy(10, 3);

	//문제 생성(출제)
	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
	}

	//문제 출력
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("문제 %2d>  %d*%d=? \n", i, x[i], y[i]);
	}
	count = 0;
	//문제 풀기 전에 모든 문제를 틀렸다고(X) 가정함
	for (i = 1; i <= 10; i++)
		check[i] = 'X';
	//시작 시간 저장
	time(&fi);
	//사용자의 값 입력
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
		printf(" 경과시간 : %2d 초 ", timesum);
	}
	//점수 출력
	gotoxy(10, 18);
	printf("당신의 점수는 %d 점 입니다.", count * 10);

	//채점결과 표시
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(28, i + 5);
		printf("%c ", check[i]);
	}

	gotoxy(10, 19);
	printf("문제를 푸는데 걸린 총 시간은 : %d초 입니다.\n", timesum);
	printf("수고하셨습니다.");
	system("PAUSE");
	system("cls");

}

void test3_4(void)
{
	int nujuk[11] = { 0 };
	float checkdan[11] = { 0 };

	// 피승수 x, 승수 y, 사용자 입력값 dap
	int x[11], y[11], dap[11];
	// 맞은 개수누적 count, 순환 변수 i
	int count, i, sum = 0;
	// 채점결과 저장
	char check[11];

	//문제 생성(출제), 해당단의 출제된 문제수를 전역변수 nujuk배열에 저장
	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
		nujuk[x[i]] = nujuk[x[i]] + 1;
	}

	// 문제 10개 출력
	system("cls");
	{
		gotoxy(15, 3);
		printf(" 각 단의 성공률  표시");
	}
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("문제 %2d>  %d*%d=? \n", i, x[i], y[i]);
	}
	//사용자의 값 입력
	count = 0;
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(25, i + 5);
		scanf("%d", &dap[i]);
		if (dap[i] == x[i] * y[i])
		{
			count = count + 1;
			check[i] = 'O';
			//출제된 특정단의 문제가 맞을 경우 전역변수 checkdan에 누적시킴
			checkdan[x[i]] = checkdan[x[i]] + 1;
		}
		else
			check[i] = 'X';
	}

	//점수 출력
	gotoxy(15, 17);
	printf(" 당신의 점수는 %d 점(50점 만점)입니다.", count * 10);
	//채점결과 OX표시
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(27, i + 5);
		printf("%c", check[i]);
	}

	gotoxy(15, 18);
	printf("아무키나 누르면 각 단의 성공률을 표시합니다. \n");
	_getch();

	//system("cls");
	for (i = 1; i <= 9; i++)
	{
		// 성공률은 비율로 나타내므로 출제된 특정단의 문제수가 0일 경우와
		// 그렇지 않은 경우로 나누어 출력
		if (nujuk[i] == 0)
			printf("%2d단:출제문제수  0:\n", i);
		else
			//printf("%2d단:출제문제수%3d:성공률 %3.0f\n", i, nujuk[i], (checkdan[i] / nujuk[i]) * 100);
			printf("%2d단:출제문제수%3d:성공률 %3.0f\n", i, nujuk[i], (checkdan[i] / 10) * 100);
	}
	system("PAUSE");
}

void anykey(void)
{
	gotoxy(10, 23);
	printf("아무키나 누르면 메뉴로 이동");
	_getch();
}
