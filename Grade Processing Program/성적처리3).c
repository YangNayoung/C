// ���� & ���� ���ֱ� & �����̸� ��Ÿ����

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PEOPLE 3
#define SUB 4

void line(int n) {
	for (int i = 1; i < n; i++) {
		printf("=");
	}
	printf("\n");
}

int main()
{
	char id[PEOPLE][5], name[PEOPLE][7];
	char Lv[PEOPLE];
	char subname[SUB][6] = { {"����"},{"����"},{"����"},{"C���"} };
	int rank[PEOPLE];
	int score[PEOPLE][SUB + 1] = { 0 }; // total[PEOPLE] = { 0 };
	float avg[PEOPLE] = { 0 };

	// �Է�
	for (int i = 0; i < PEOPLE; i++) {
		printf("\n");
		printf("�й��� �Է��Ͻÿ�(���ڷ�): ");
		scanf("%s", id[i]);

		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", name[i]);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s�� �Է��Ͻÿ�: ",subname[j]);
				scanf("%d", &score[i][j]);
				if (!(score[i][j] < 0 || score[i][j] > 100)) break;
				printf("���� ����\n");
			}
		}// �Է� ��

		// ����,���
		for (int j = 0; j < SUB; j++) {
			score[i][SUB] += score[i][j];
		}
		avg[i] = (float)(score[i][SUB] / SUB); // ����, ��� ��

		// ���

		float avg1 = avg[i] / 10;
		switch ((int)avg1) {
		case 10:case 9: Lv[i] = ('A'); break;
		case 8:Lv[i] = ('B'); break;
		case 7:Lv[i] = ('C'); break;
		case 6:Lv[i] = ('D'); break;
		default: Lv[i] = ('F'); break;
		}
	}// ��� ��

	// ����
	for (int i = 0; i < PEOPLE; i++) {
		rank[i] = 1;
	}

	for (int i = 0; i < PEOPLE - 1; i++) {
		for (int j = i + 1; j < PEOPLE; j++) {
			if (score[i][SUB] < score[j][SUB])
				rank[i]++;
			else if (score[i][SUB] > score[j][SUB])
				rank[j]++;
		}
	}// ���� ��

	// ���
	line(50);
	printf("�й�  �̸�     ����  ����   ����    C  ����     ���  ���  ����\n");
	for (int i = 0; i < PEOPLE; i++) {
		printf("%-5s %-7s", id[i], name[i]); // �й�, �̸�
		for (int j = 0; j < SUB; j++) {
			printf("%6d", score[i][j]); // ����
		}
		printf("%6d %8.2f %5c %5d\n", score[i][SUB], avg[i], Lv[i], rank[i]); //����, ���, ���, ����
	}
	line(50);
}// ��� ��
