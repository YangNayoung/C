#include <stdio.h>

struct profile
{
	int age;
	double height;
	char *np;
};

struct student
{
	struct profile pf;
	int num;
	double grade;
};

int main()
{
	struct student s1;

	s1.pf.age = 32;
	s1.pf.height = 187.5;
	s1.pf.np = "홍길동";

	s1.num = 5;
	s1.grade = 4.4;

	printf("이름 : %s\n", s1.pf.np);
	printf("나이 : %d\n", s1.pf.age);
	printf("키 : %1.lf\n", s1.pf.height);
	printf("학번 : %d\n", s1.num);
	printf("학점 : %1.lf\n", s1.grade);

	return 0;
}