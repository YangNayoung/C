#include<stdio.h>

void main()
{
	char aa[6] = "KOREA";
	char *p;
	int i;
	p = &aa[0];

	printf("p = %x\n", &aa[0]);
	printf("&p = %x\n", &p);
	printf("*p = %c\n", *p);
	printf("p = %x\n", p);
	printf("p = %s\n\n", p); // �迭�� �̸��� ���� ���ڿ��� �� ������ �Ͱ� ���� ��

	for (i = 0; i <= 4; i++)
		printf("aa[%d] = %c, �ּҴ� %p\n\n", i, *(p + i), &aa[i]);

	for (i = 0; i <= 4; i++) {
		printf("aa[%d]=%c, �ּҴ� %p \n", i, *(p + i), &aa[i]);
		printf("aa[%d]=%c, �ּҴ� %p \n", i, aa[i], p + i);
		printf("aa[%d]=%c, �ּҴ� %p \n", i, *(aa + i), &p[i]);
		printf("aa[%d]=%c, �ּҴ� %p \n", i, p[i], aa + i);
	}
}