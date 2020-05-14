#include <stdio.h>


typedef struct student {
	char name[20];
	int Kor, eng, mat;
	double ave;
} STUDENT;

void main() {
	STUDENT s1 = { "김모모", 100,100,100,0.0 };
	STUDENT s2 = { "박나나", 90,80,88,0.0 };
	STUDENT s3 = { "이만수", 45,32,44,0.0 };
	STUDENT* std[] = { &s1, &s2, &s3 };

	for (int i = 0; i < 3; i++) {
		std[i]->ave = (double)(std[i]->Kor + std[i]->eng + std[i]->mat) / 3;
		printf("%s  %.2lf\n", std[i]->name, std[i]->ave);
	}
}