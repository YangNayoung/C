#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main()
{
	int No;
	char Gender;
	char Name[7];
	float Weight;
	float Bodyfat;

	printf("����:");
	scanf("%c", &Gender); // & �ּ�

	printf("��ȣ:");
	scanf("%d", &No);

	printf("�̸�:");
	scanf("%s", Name);

	printf("ü��:");
	scanf("%f", &Weight);

	printf("ü����:");
	scanf("%f", &Bodyfat);

	printf("%c\t", Gender);
	printf("%d\t", No);
	printf("%s\t", Name);
	printf("%.1\t", Weight);
	printf("%.1\t", Bodyfat);

	return 0;
}