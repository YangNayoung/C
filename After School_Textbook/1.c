#include <stdio.h>

/*int main(void)
{
     printf("�ڷ��� : ũ��(����Ʈ)\n");
     printf("char : %d %d\n", sizeof(char), sizeof(unsigned char));
     printf("short : %d %d\n", sizeof(short), sizeof(unsigned short))
     printf("int : %d %d\n", sizeof(int), sizeof(200));
     printf("long : %d %d\n", sizeof(long), sizeof(300L));
     printf("long long : %d %d\n", sizeof(long long), sizeof(900LL));
     printf("float : %d %d\n", sizeof(float), sizeof 3.14F);
     printf("double : %d %d\n", sizeof(double), sizeof 3.24L);
     return 0;

}*/

int main(void)
{
	const double RATE = 0.03;
	int deposit = 800000;

printf("������: %f\n", RATE);
	printf("���� �ܰ�: %d\n", deposit);
	printf("���ھ�: %f\n", deposit * RATE);

	char* str = "���� C ��� �Թ���";
	char* const title = "������ C ���";

	str = "�ֱ� ���� ���� C ��� �Թ���";
	title = "C ��� ����ġ"; //���� �Ұ���
	printf("\n%s: %s\n", str, title); //���ڿ� ���� ���
	return 0;
}