#include <stdio.h>
#pragma warning(disable:4996)

/* while �� ����Ͽ� 2���� 10������ ¦�� ���
int main() {

	int i = 2;
	while (i <= 10) {
		printf("%3d", i); // %3d�� 3�� 3ĭ�� �����϶�
		i+= 2;
	}
	return 0;
}
*/

/* do while �� ����Ͽ� 5���� �Ǽ��� �Է°� ���
int main() {
	int n = 1;
	double input = 0;
	do {
		scanf("%lf", &input);
		printf("%f\n", input);
		n++;
	} while (n <= 5);

		return 0;
	}
*/

/*  for�� ����Ͽ� 1���� 10������ ���� ���
int main() {
	long mult = 1;

	for(int m = 1; m <= 10; m++)
		mult *= m;

	printf("%d\n", mult);
}
*/