#include <stdio.h>

union student {
	int number;
	char *name;
	int age;
};

int main(void) {
	union student list;

	list.number = 20101;
	printf("\n 번호 :%d, 이름 :%c, 나이 :%d \n", list.number, list.name, list.age);
	list.name = "홍길동";
	printf("\n 번호 :%d, 이름 :%s, 나이 :%d \n", list.number, list.name, list.age);
	list.age = 17;
	printf("\n 번호 :%d, 이름 :%d, 나이 :%d \n\n", list.number, list.name, list.age);

	printf("\n %d, %d, %d \n\n", &list.number, &list.name, &list.age);
}