#include <stdio.h>
#include <stdlib.h>

void main() {
	int *ip;
	double *dp;

	ip = (int *)malloc(sizeof(int));
	if (ip == 0) 
		printf("�޸𸮰� �����մϴ�.\n");
	else {
		*ip = 10;
		printf("%d\n", *ip);
	}

	dp = (double *)malloc(sizeof(double));
	if (dp == 0)
		printf("�޸𸮰� �����մϴ�.\n");
	else {
		*dp = 3.4;
		printf("%d\n", *dp);
	}


	*ip = 10;
	*dp = 3.4;

	printf("���������� ��� : %d\n", *ip);
	printf("�Ǽ������� ��� : %.1lf\n", *dp);
}