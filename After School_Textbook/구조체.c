/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
struct student {
char name[20];
int korean, english, math;
double average;
}s1, s2;
s1.korean = 100;
s1.english = 100;
s1.math = 100;
strcpy(s1.name, "����");
s1.average = (double)(s1.korean + s1.english + s1.math) / 3;

s2.korean = 90;
s2.english = 90;
s2.math = 90;
strcpy(s2.name, "�ڳ���");
s2.average = (double)(s2.korean + s2.english + s2.math) / 3;

printf("���� : %d\t���� : %d\t���� : %d\t�̸� : %s\t���: %f\n", s1.korean, s1.english, s1.math, s1.name, s1.average);
printf("���� : %d\t���� : %d\t���� : %d\t�̸� : %s\t���: %f\n", s2.korean, s2.english, s2.math, s2.name, s2.average);
}
*/

#include <stdio.h>

struct student {
	char name[10];
	int kor, eng, mat;
};

int main(void) {
	struct student arr[3] = {
	{ "����", 100, 100, 100 },
	{ "�ڳ���", 90, 90, 90 },
	{ "�ֹ̹�", 80, 80, 80 }
	};
	printf("�̸�\t����\t����\t����\n");
	printf("------------------------------\n");

	for (int i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\t%d", arr[i].name, arr[i].kor, arr[i].eng, arr[i].mat);
		printf("\n");
	}
}