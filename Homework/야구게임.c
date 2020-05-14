#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int com[3];//컴퓨터가 생각하는 숫자
	int user[3];//사용자 숫자 입력
	int strike = 0, ball = 0;

	srand((unsigned)time(0));

	for (int i = 0; i < 3; i++) {
		com[i] = rand() % 10;
		for (int j = 0; j < i; j++)
			if (com[i] == com[j]) 
				i--;
	} // 컴퓨터에 랜덤 수 넣기 (세개 숫자가 다 다를때까지)
	for (int i = 0; i < 3; i++) 
		printf("%d ", com[i]); // 컴퓨터 랜덤 숫자 출력
	for (int i = 0; i<3; i++)
		scanf("%d", &user[i]); // 사용자 입력


	for (int i = 0; i < 3; i++) {
		if (com[i] == user[i])
			strike++; // 숫자가 같을떄
		for (int j = 0; j < 3; j++)
			if (com[i] == user[j]) 
				ball++; 
	} // 자리는 다르고 숫자 같을떄
	if (ball>0) 
		ball = ball - strike; // 자리가 같은 경우 빼기

	if (strike == 3) 
		printf("correct\n"); // 숫자 다 맞을때 (정답)
	else if (strike + ball == 0) 
		printf("out\n"); // 맞은 숫자 아무것도 없을떄
	else {
		printf("%d strike\n", strike); // strike 출력
		printf("%d ball\n", ball); // ball 출력
	}
}