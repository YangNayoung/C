// ����ü �Լ� �Է� �κ� (void input())
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
//#define PEOPLE 3
#define SUB 4

char subname[SUB][6] = { { "����" },{ "����" },{ "����" },{ "C���" } };

void line(int n) {
	for (int i = 1; i < n; i++) {
		printf("=");
	}
	printf("\n");
}

struct student {
	char id[5], name[7];
	char Lv;
	int rank;
	int score[SUB + 1]; // total[PEOPLE] = { 0 }; ���� ������ +1
	float avg;
};

void input(struct student *a) {
	printf("\n");
	printf("�й��� �Է��Ͻÿ�(���ڷ�): ");
	scanf("%s", a->id);

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", a->name);

	for (int j = 0; j < SUB; j++) {
		while (1) {
			printf("%s�� �Է��Ͻÿ�: ", subname[j]);
			scanf("%d", &a->score[j]);
			if (!(a->score[j] < 0 || a->score[j] > 100)) break;
			printf("���� ����\n");
		}
		a->score[SUB] = 0; // �л� ���� �ʱⰪ
		a->avg = 0; // ��� �ʱⰪ
	}
}

void calc(struct student *stu, int PEOPLE) {
	for (int j = 0; j < SUB; j++) {
		(stu->score[SUB]) += (stu->score[j]); // �л� ����
		((stu + PEOPLE)->score[j]) += (stu->score[j]); // ���� ����
	}
	stu->avg = (float)(stu->score[SUB] / SUB); // �л� ��� 
	 // ����, ��� ��

	 // ���
	float avg1 = stu->avg / 10;
	switch ((int)avg1) {
	case 10:case 9: stu->Lv = ('A'); break;
	case 8: stu->Lv = ('B'); break;
	case 7: stu->Lv = ('C'); break;
	case 6: stu->Lv = ('D'); break;
	default: stu->Lv = ('F'); break;
	} // ��� ��
}

void print(struct student a) { // ����ü ��� �Լ� 
	printf("%-5s %-7s", a.id, a.name); // �й�, �̸�
	for (int j = 0; j < SUB; j++) {
		printf("%8d", a.score[j]); // ����
	}
	printf("%8d %8.2f %5c %5d\n", a.score[SUB], a.avg, a.Lv, a.rank); //����, ���, ���, ����
}

int main() // main ����
{
	int PEOPLE;
	printf("�� ���� �Է��Ͻðڽ��ϱ�? ");
	scanf("%d", &PEOPLE);

	int total[5] = { 0 }; // ���� ���� �迭
	float avg[5] = { 0 }; // �ݺ� ���
	char subname[SUB][6] = { { "����" },{ "����" },{ "����" },{ "C���" } };

	struct student *stu = (struct student *)malloc(sizeof(struct student)*PEOPLE);


	 // �Է�,����,���
	for (int i = 0; i < PEOPLE; i++) {
		input(stu + i); // �Է�
		calc(stu + i, PEOPLE);  // ����,���
	} // �Է�, ����, ��� ��

	 // ������ ����, ������ ���� 
	for (int i = 0; i < SUB; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			total[i] += (*(stu + j)).score[i]; // ������ ����
		}
		total[4] += total[i]; // ������ ������ ����
	} // ������ ����, ������ ������ ���� ��

	// ������ ���, ������ ������ ���
	for (int i = 0; i < SUB + 1; i++) {
		avg[i] = (float)total[i] / PEOPLE;
	} // ������ ���, ������ ������ ��� �� 

	// ����
	for (int i = 0; i < PEOPLE; i++) {
		(*(stu + i)).rank = 1;
	}

	for (int i = 0; i < PEOPLE - 1; i++) {
		for (int j = i + 1; j < PEOPLE; j++) {
			if ((*(stu + i)).score[SUB] < (*(stu + j)).score[SUB])
				(*(stu + i)).rank++;
			else if ((*(stu + i)).score[SUB] > (*(stu + j)).score[SUB])
				(*(stu + j)).rank++;
		}
	}// ���� ��

	 // ���
	line(75);
	printf("�й�  �̸�       ����    ����    ����       C    ����     ���  ���  ����\n");
	for (int i = 0; i < PEOPLE; i++) {
		print(stu[i]); // ����ü ��� �Լ�
	}
	line(75);

	printf("���� ����  ");
	for (int i = 0; i < SUB + 1; i++) {
		printf("%8d", total[i]);
	} // ���� ����, ������ ������ ����

	printf("\n");

	printf("���� ���   ");
	for (int i = 0; i < SUB + 1; i++) {
		printf("%7.2f ", avg[i]);
	} // ���� ���, ������ ������ ���

	printf("\n"); // ��� ��
} // main ��