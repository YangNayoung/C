// ����ü �迭, ���� ����, ������ ����.
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

struct student {
	char id[5], name[7];
	char Lv;
	int rank;
	int score[SUB + 1]; // total[PEOPLE] = { 0 }; ���� ������ +1
	float avg;
}stu[PEOPLE];

int main() // main ����
{
	int total[5] = { 0 }; // ���� ����+������ ���� �迭

	char subname[SUB][6] = { { "����" },{ "����" },{ "����" },{ "C���" } };

	// �Է�
	for (int i = 0; i < PEOPLE; i++) {
		printf("\n");
		printf("�й��� �Է��Ͻÿ�(���ڷ�): ");
		scanf("%s", stu[i].id);

		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", stu[i].name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s�� �Է��Ͻÿ�: ", subname[j]);
				scanf("%d", &stu[i].score[j]);
				if (!(stu[i].score[j] < 0 || stu[i].score[j] > 100)) break;
				printf("���� ����\n");
			}
		}// �Է� ��

		 // ����,���
		for (int j = 0; j < SUB; j++) {
			stu[i].score[SUB] += stu[i].score[j]; // �л� ����
			stu[PEOPLE].score[j] += stu[i].score[j]; // ���� ����
		}
		stu[i].avg = (float)(stu[i].score[SUB] / SUB); // ����, ��� ��
													   
		// ���
		float avg1 = stu[i].avg / 10;
		switch ((int)avg1) {
		case 10:case 9: stu[i].Lv = ('A'); break;
		case 8:stu[i].Lv = ('B'); break;
		case 7:stu[i].Lv = ('C'); break;
		case 6:stu[i].Lv = ('D'); break;
		default:stu[i].Lv = ('F'); break;
		}
	}// ��� ��

	 // ������ ���� 
	for (int i = 0; i < SUB; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			total[i] += stu[j].score[i]; // ������ ����
		}
		total[4] += total[i]; // ������ ����
	} // ��

	 // ����
	for (int i = 0; i < PEOPLE; i++) {
		stu[i].rank = 1;
	}

	for (int i = 0; i < PEOPLE - 1; i++) {
		for (int j = i + 1; j < PEOPLE; j++) {
			if (stu[i].score[SUB] < stu[j].score[SUB])
				stu[i].rank++;
			else if (stu[i].score[SUB] > stu[j].score[SUB])
				stu[j].rank++;
		}
	}// ���� ��

	 // ���
	line(65);
	printf("�й�  �̸�     ����  ����   ����    C  ����     ���  ���  ����\n");
	for (int i = 0; i < PEOPLE; i++) {
		printf("%-5s %-7s", stu[i].id, stu[i].name); // �й�, �̸�
		for (int j = 0; j < SUB; j++) {
			printf("%6d", stu[i].score[j]); // ����
		}
		printf("%6d %8.2f %5c %5d\n", stu[i].score[SUB], stu[i].avg, stu[i].Lv, stu[i].rank); //����, ���, ���, ����
	}
	line(65);

	printf("%15s", "���� ���� ");
	for (int i = 0; i < SUB + 1; i++) {
		printf("%5d", total[i]);
	} // ���� ����, ������ ����
	
	printf("\n"); // ��� ��
} // main ��
