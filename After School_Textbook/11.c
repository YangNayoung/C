#include <stdio.h>
#pragma warning(disable:4996)

/*int main(void)
{
	int score = 95;

	printf("90�� �̻� 100�� �����ΰ�? : %d\n", score >= 90 && score <= 100);

	printf("0�� �Ǵ� 100���ΰ�? : %d\n", score == 0 || score == 100);
	printf("0�� �ΰ�? : %d\n", !score);

	return 0;
}*/

int main(void)
{
	int a,b,c;
	int min,max;
	
	printf("�� ���� ������ �Է��ϰԿ� : ");
	scanf("%d %d %d", &a, &b, &c);

		min = a < b ? a : b;
		min = min < c ? min : c;
	    max = a > b ? a : b; 
		max = max > c ? max : c;

		printf("min = %d,max = %d\n",min,max);

		return 0;
}