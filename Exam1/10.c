/* ��,��,�� ���� �Է¹޾� ����,��� ����ϰ� switch���� �̿��Ͽ� ��տ� ���� 
 80�� �̻� '����' 70�� �̻� '����' 50�� �̻� '��¿��' �� ���ϴ� '�ɷº���' ��� */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kor;
	printf("�������� : ");
	scanf("%d", &kor);

	int eng;
	printf("�������� : ");
	scanf("%d", &eng);

	int mat;
	printf("�������� : ");
	scanf("%d", &mat);

	int sum = 0;
	sum = kor + eng + mat;

	float avg=0;
	avg = (float)sum / 3;

	switch ((int)avg/10)
	{
	case 10: case 9: case 8: printf("���� : %d, ��� : %.3f ==> ����\n", sum, avg); break;
	case 7: printf("���� : %d, ��� : %.3f ==> ����\n", sum, avg); break;
	case 6: case 5: printf("���� : %d, ��� : %.3f ==> ��¿��\n", sum, avg); break;
	default: printf("���� : %d, ��� : %.3f == > �ɷº���\n", sum, avg); break;
	}
}