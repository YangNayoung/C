// �ο����� �ο�����ŭ�� �л� ������(�Ҽ� ���� 2�ڸ�����)�� �Է��Ͽ� �������� �հ� ��� ���ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	float b, sum = 0;
	printf("�ο� �� �Է� : ");
	scanf("%d", &n);

	printf("%d���� �����Ը� �Է��ϼ���.\n",n);
	for(int i=1; i<=n; i++) {
		scanf("%f", &b);
		sum+= b;
	}

	printf("�������� �� = %.2f\n", sum);
	printf("�������� ��� = %.2f\n", sum / n);
}