#include <stdio.h>

void sort(int *x, int size);

int main(void) 
{
	int i;
	int size = 5;
	int a[6];

	for (i = 0; i < 5; i++) {
		printf("1-100 ������ %d��° ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &a[i]);
		for (int j = 0; j < i + 1; j++) {
			if (i != j && a[i] == a[j]) {
				printf("���� ���� �ֽ��ϴ�. \n");
				i--;
				break;
			}
		}
	}

	printf("�������� ���� �ϱ� �� : ");
	for (int i = 0; i < 5; i++) printf("%d ", a[i]);

	sort(a, size);

	printf("\n�������� ������ �� : ");
	for (int i = 0; i < 5; i++) printf("%d ", a[i]);
	printf("\n");

	return 0;
}

void sort(int *x, int size) {
	int temp;

	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (x[i] > x[j]) {
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}