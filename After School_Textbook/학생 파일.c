/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_STUDENT 5

typedef struct student {
	char name[20];
	int kor, eng, mat;
	double avg;
} STUDENT;

int main()
{
	STUDENT std[MAX_STUDENT];
	int i;
	FILE *fp = NULL;

	for (i = 0; i < MAX_STUDENT; i++) {
		printf("학생 정보를 입력하세요: ");
		scanf("%s %d %d %d", std[i].name, &std[i].kor, &std[i].eng, &std[i].mat);
		std[i].avg = (double)(std[i].kor + std[i].eng + std[i].mat) / 3;
	}
	fp = fopen("report.txt", "w");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return -1;
	}
	for (i = 0; i < MAX_STUDENT; i++)
		fprintf(fp, "%-10s %3d %3d %3d %6.2f\n", std[i].name, std[i].kor, std[i].eng, std[i].mat, std[i].avg);

	fclose(fp);
	return 0;
} */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int arr1[10] = { 34,90,87,65,46,21,19,53,78,2 };
	int arr2[10];
	int i;
	FILE *fp;

	fp = fopen("test.dat", "wb");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return -1;
	}

	fwrite(arr1, sizeof(int), 10, fp);
	fclose(fp);

	fp = fopen("test.dat", "rb");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return -1;
	}

	fread(arr2, sizeof(int), 10, fp);
	fclose(fp);
	
	for (i = 0; i < 10; i++)
		printf("%d", arr2[i]);
	printf("\n");
	
	return 0;
}