#pragma warning (disable:4996)
#include <stdio.h>
struct profile {
	char name[20];
	int age;
	char sex[9];
	char ad[40];
	char number[20];
};

int main() {
	struct profile p1;

	printf("이름을 입력하세요: ");
	scanf("%s", &p1.name);

	printf("나이를 입력하세요: ");
	scanf("%d", &p1.age);

	printf("성별을 입력하세요: ");
	scanf("%s", &p1.sex);

	printf("주소를 입력하세요: ");
	scanf("%s", &p1.ad);

	printf("전화번호를 입력하세요: ");
	scanf("%s", &p1.number);

	printf("\n");
	printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);
	printf("성별 : %s\n", p1.sex);
	printf("주소 : %s\n", p1.ad);
	printf("전화번호 : %s\n", p1.number);

	return 0;
}