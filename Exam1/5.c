/* ������ ���� �ٹ��ð�, �ð��� ������ �Է� �� �������� �޷� �Ի� �� ��� ( hour: �ٹ��ð� / rate: �ð��� ���� )
 1) �ٹ��ð� <=50�̸�, �޷� = �ٹ��ð� * �ð��� ����       ( rpay: 50�ð� ���Ͽ� ���� �޷� / opay: �ʰ��ð��� ���� �޷� )
 2) �ٹ��ð� >50�̸�, �޷�� �ʰ��ð�(�ٹ��ð� -50)�� ���Ͽ� �ð��� ������ 1.5�� ����    (tpay : �޷� �Ѿ�(rapy+opay) ) */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hour = 0, rate = 0, rpay = 0, opay = 0, tpay = 0;

	printf("�ٹ��ð� �Է� : ");
	scanf_s("%d", &hour);

	printf("�ð������ �Է� : ");
	scanf_s("%d", &rate);

	if (hour <= 50)
		rpay = hour * rate;

	if (hour > 50) {
		opay = (hour - 50)*rate*1.5;
		rpay = 50 * rate;
	}

	printf("�� �޿��� %d�� �Դϴ�.\n", tpay = rpay + opay);
}