// ��� �����ʹ� 4byte
#include <stdio.h>

int main(void)
{
	char *c;
	short *s;
	int *i;
	float *f;
	double *d;
	printf("char *�޸��� ũ�� %dbyte ���� �ּ� : %x \n", sizeof(c), &c);
	printf("short *�޸��� ũ�� %dbyte ���� �ּ� : %x \n", sizeof(s), &s);
	printf("int *�޸��� ũ�� %dbyte ���� �ּ� : %x \n", sizeof(i), &i);
	printf("float *�޸��� ũ�� %dbyte ���� �ּ� : %x \n", sizeof(f), &f);
	printf("double *�޸��� ũ�� %dbyte ���� �ּ� : %x \n", sizeof(d), &d);
}
