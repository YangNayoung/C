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

int main()
{
	struct student *p = &stu[0]; 

	int total[4] = { 0 }; // ���� ���� �迭
	float avg[4] = { 0 }; // �ݺ� ���
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
	}
	// �Է� -������ Ȱ��
	for (int i = 0; i < PEOPLE; i++) {
		printf("\n");
		printf("�й��� �Է��Ͻÿ�(���ڷ�): ");
		scanf("%s", &((*p).id));

		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", &((*p).name));

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s�� �Է��Ͻÿ�: ", subname[j]);
				scanf("%d", &((*p).score[j]));
				if (!((*p).score[j] < 0 || (*p).score[j] > 100)) break;
				printf("���� ����\n");
			}
		}// �Է� ��
	}
	printf("\n");
	printf("%s\n", (*p).id);
	printf("%s\n", (*(p+1)).id);
}
