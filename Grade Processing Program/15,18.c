#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char id[5], name[7];
	int kor, eng, mat, c, total=0;
	float avg=0;

	printf("�й��� �Է��Ͻÿ� : ");
	scanf("%s", id);
	printf("�̸��� �Է��Ͻÿ� : ");
	scanf("%s", name);
	printf("���������� �Է��Ͻÿ� : ");
	scanf("%d", &kor);
	if (kor < 0 || kor > 100) {
		printf("�������� ����\n");
	}
	printf("���������� �Է��Ͻÿ� : ");
	scanf("%d", &eng);
	if (eng < 0 || eng >100) {
		printf("�������� ����\n");
	}
	printf("���������� �Է��Ͻÿ� : ");
	scanf("%d", &mat);
	if (mat < 0 || mat >100) {
		printf("�������� ����\n");
	}
	printf("C������ �Է��Ͻÿ� : ");
	scanf("%d", &c);
	if (c < 0 || c >100) {
		printf("C���� ����\n");
	}

	total = kor + eng + mat + c;
	avg = (float)(total / 4.0);
	
	printf("%s %s %d %d %d %d\n", id, name, kor, eng, mat, c);
	printf("���� : %d   ��� : %f  ", total, avg);
	/*if (avg >= 90) {
		printf("A");
	}
	else if (avg >= 80) {
		printf("B");
	}
	else if (avg >= 70) {
		printf("C");
	}
	else if (avg >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}*/
	
	float avg1 = avg / 10;
	switch ((int)avg1) {
		case 10:case 9: printf("A\n"); break;
		case 8:printf("B\n"); break;
		case 7:printf("C\n"); break;
		case 6:printf("D\n"); break;
		default : printf("F\n"); break;
	}


}