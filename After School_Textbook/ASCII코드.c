/* ǥ������
#include <stdio.h>

int main(void)
{
	unsigned char i, count = 0;

	for (i = 32; i < 127; i++) { // 0���� ������ é �� Ű�� ���´�. i=0;
		printf("%c(%3d) ", i, i);
		count++;
		
		if (count == 6) {
			count = 0;
			printf("\n");
		}
	}
	printf("\n");
	return 0;
} */

// Ȯ������
#include <stdio.h>
#include <Windows.h>

int main(void)
{
	unsigned char i, count = 0;
	system("chcp 437"); // Ư������ ���̰� �ϴ� ��

	for (i = 120; i < 255; i++) { // 127 ~ 255 Ư�����ڵ� ���´�.
		printf("%c(%3d) ", i, i);
		count++;

		if (count == 5) {
			count = 0;
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}