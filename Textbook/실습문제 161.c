/*
#include <stdio.h>

int main()
{
	int i, j, s=0;
	static score[][3] = {
	{83,90,88},
	{84,85,90},
	{81,82,84},
	{86,86,92},
	{75,83,93}
	};

	int total[5][4];
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			total[i][j] = score[i][j];
			s += score[i][j];
			total[i][4] = s;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\n", total[i][j]);
		}
	}
}*/

#include <stdio.h>

void main()
{
	int ct[5] = { 3,1,2,5,4 };
	int temp;

	printf("정렬 전 : ");
	for (int a = 0; a < 5; a++)
		printf("%2d", ct[a]);
	printf("\n");

	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (ct[i] < ct[j]) {
				temp = ct[i];
				ct[i] = ct[j];
				ct[j] = temp;
			}
		}
	}
	printf("정렬 후 : ");
	for (int a = 0; a < 5; a++)
		printf("%2d", ct[a]);
	printf("\n");
}