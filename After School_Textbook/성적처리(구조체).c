#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student {
	char name[20];
	int kor, eng, math, total;
	double average;
}STUDENT;
void InputStudentInfo(STUDENT*arr, int n);
void PrintStudentInfo(STUDENT*arr, int n);
int main(void)
{
	int num;
	STUDENT *a = NULL;
	printf("��ü �л� ���� �Է��ϼ��� : ");
	scanf("%d", &num);
	a = (STUDENT*)malloc(sizeof(STUDENT)*num);
	InputStudentInfo(a, num);
	PrintStudentInfo(a, num);
	free(a);
	a = NULL;
	return 0;
}
void InputStudentInfo(STUDENT*arr, int n)
{
	printf("%d���� �л� ������ �Է��ϼ���.\n", n);
	for (int i = 0; i < n; i++)
	{
		printf("�̸� : ");
		scanf("%s", &arr[i].name);
		printf("���� : ");
		scanf("%d", &arr[i].kor);
		printf("���� : ");
		scanf("%d", &arr[i].eng);
		printf("���� : ");
		scanf("%d", &arr[i].math);
		arr[i].total = arr[i].kor + arr[i].eng + arr[i].math;
		arr[i].average = (double)arr[i].total / 3;
	}
}
void PrintStudentInfo(STUDENT*arr, int n)
{
	printf("< ��ü ����ǥ >\n");
	printf("�̸�    ���� ���� ���� ����  ���\n");
	for (int j = 0; j < n; j++)
	{
		printf("%s %d %d %d %d %f\n",
			arr[j].name, arr[j].kor, arr[j].eng, arr[j].math, arr[j].total, arr[j].average);
	}
}