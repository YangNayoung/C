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

	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", &p1.name);

	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &p1.age);

	printf("������ �Է��ϼ���: ");
	scanf("%s", &p1.sex);

	printf("�ּҸ� �Է��ϼ���: ");
	scanf("%s", &p1.ad);

	printf("��ȭ��ȣ�� �Է��ϼ���: ");
	scanf("%s", &p1.number);

	printf("\n");
	printf("�̸� : %s\n", p1.name);
	printf("���� : %d\n", p1.age);
	printf("���� : %s\n", p1.sex);
	printf("�ּ� : %s\n", p1.ad);
	printf("��ȭ��ȣ : %s\n", p1.number);

	return 0;
}