// 3�� �ݺ��ϸ� 0 �����̰ų� 100�� ������ �ٽ� �Է�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char id[5], name[7];
	int kor, eng, mat, c, total = 0, count=1;
	float avg = 0;

	// �Է�
	while (count <= 3)
	{
		printf("======================================\n");
		printf("�й��� �Է��Ͻÿ�(���ڷ�): ");
		scanf("%s", id);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", name);
		while (1) {
			printf("���������� �Է��Ͻÿ�: ");
			scanf("%d", &kor);
			if (!(kor < 0 || kor > 100)) break;
			printf("�������� ����\n");
		}
		while (1) {
	     	printf("���������� �Է��Ͻÿ�: ");
		    scanf("%d", &eng);
		    if (!(eng < 0 || eng > 100)) break;
			printf("�������� ����\n");
		}
		while (1) {
		    printf("���������� �Է��Ͻÿ�: ");
		    scanf("%d", &mat);
			if (!(mat < 0 || mat > 100)) break;
			printf("�������� ����\n");
		}
		while (1) {
		    printf("C������ �Է��Ͻÿ� : ");
		    scanf("%d", &c);
			if (!(c < 0 || c > 100)) break;
			printf("C���� ����\n");
		}// �Է� ��

		// ����, ���
		total = kor + eng + mat + c;
		avg = (float)(total / 4.0);
		printf("--------------------------------------\n");
		printf("\n");
		printf("%s %s %d %d %d %d %d %.2f", id, name, kor, eng, mat, c, total, avg); // ����, ��� ��
		/*if (avg >= 90) {
		printf("A");
		}
		else if (avg >= 80) {
		printf("B");
		}
		else if (avg >= 70) {
		printf("C");
		}
		else if (avg >= 60) {
		printf("D");
		}
		else {
		printf("F");
		}*/

		// ���
		float avg1 = avg / 10;
		switch ((int)avg1) {
		case 10:case 9: printf(" A\n"); break;
		case 8:printf(" B\n"); break;
		case 7:printf(" C\n"); break;
		case 6:printf(" D\n"); break;
		default: printf(" F\n"); break;
		} // ��� ��
		count++;
	}
}