#include <stdio.h>

union student {
	int number;
	char *name;
	int age;
};

int main(void) {
	union student list;

	list.number = 20101;
	printf("\n ��ȣ :%d, �̸� :%c, ���� :%d \n", list.number, list.name, list.age);
	list.name = "ȫ�浿";
	printf("\n ��ȣ :%d, �̸� :%s, ���� :%d \n", list.number, list.name, list.age);
	list.age = 17;
	printf("\n ��ȣ :%d, �̸� :%d, ���� :%d \n\n", list.number, list.name, list.age);

	printf("\n %d, %d, %d \n\n", &list.number, &list.name, &list.age);
}