// 279p. 1��
/*#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int a, b, min, max;

	printf("������ ���� �Է�1 : ");
	scanf("%d", &a);
	printf("������ ���� �Է�2 : ");
	scanf("%d", &b);

	(a > b) ? (max = a, min = b) : (max = b, min = a);
	printf("���� %d�̰� �������� %d�Դϴ�.\n", max / min, max % min);

	return 0;
}*/
	
//3��

#include <stdio.h>
#pragma warning(disable:4996)

 int main(void) 
{
	double x;

	printf("���̸���Ƽ���ͷ��Է��ϼ���.(�Ҽ�) >> ");
	scanf("%lf", &x);
	printf("%lf ��Ƽ���ʹ�%6.3lf ��Ʈ�Դϴ�.\n", x, x / 30.48);

	return 0;
}





 