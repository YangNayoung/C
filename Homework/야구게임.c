#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int com[3];//��ǻ�Ͱ� �����ϴ� ����
	int user[3];//����� ���� �Է�
	int strike = 0, ball = 0;

	srand((unsigned)time(0));

	for (int i = 0; i < 3; i++) {
		com[i] = rand() % 10;
		for (int j = 0; j < i; j++)
			if (com[i] == com[j]) 
				i--;
	} // ��ǻ�Ϳ� ���� �� �ֱ� (���� ���ڰ� �� �ٸ�������)
	for (int i = 0; i < 3; i++) 
		printf("%d ", com[i]); // ��ǻ�� ���� ���� ���
	for (int i = 0; i<3; i++)
		scanf("%d", &user[i]); // ����� �Է�


	for (int i = 0; i < 3; i++) {
		if (com[i] == user[i])
			strike++; // ���ڰ� ������
		for (int j = 0; j < 3; j++)
			if (com[i] == user[j]) 
				ball++; 
	} // �ڸ��� �ٸ��� ���� ������
	if (ball>0) 
		ball = ball - strike; // �ڸ��� ���� ��� ����

	if (strike == 3) 
		printf("correct\n"); // ���� �� ������ (����)
	else if (strike + ball == 0) 
		printf("out\n"); // ���� ���� �ƹ��͵� ������
	else {
		printf("%d strike\n", strike); // strike ���
		printf("%d ball\n", ball); // ball ���
	}
}