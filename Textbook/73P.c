#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main()
{
	int No;
	char Gender;
	char Name[7];
	float Weight;
	float Bodyfat;

	printf("성별:");
	scanf("%c", &Gender); // & 주소

	printf("번호:");
	scanf("%d", &No);

	printf("이름:");
	scanf("%s", Name);

	printf("체중:");
	scanf("%f", &Weight);

	printf("체지방:");
	scanf("%f", &Bodyfat);

	printf("%c\t", Gender);
	printf("%d\t", No);
	printf("%s\t", Name);
	printf("%.1\t", Weight);
	printf("%.1\t", Bodyfat);

	return 0;
}