#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int binary_declmal(char bd[]) {
	int sum = 0;

	for (int i = 0; i < 8; i++)
		sum = sum + (bd[i] - '0') *(int)pow(2, 7 - i);
	return sum;
}

int main()
{
	char input[9];
	printf("2���� �Է�(8�ڸ�) : ");
	scanf("%s",input);

	printf("10���� : %d\n", binary_declmal(input));
}