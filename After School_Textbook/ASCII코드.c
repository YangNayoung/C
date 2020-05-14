/* 표준집합
#include <stdio.h>

int main(void)
{
	unsigned char i, count = 0;

	for (i = 32; i < 127; i++) { // 0부터 돌리면 챕 등 키가 나온다. i=0;
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

// 확장집합
#include <stdio.h>
#include <Windows.h>

int main(void)
{
	unsigned char i, count = 0;
	system("chcp 437"); // 특수문즈 보이게 하는 것

	for (i = 120; i < 255; i++) { // 127 ~ 255 특수문자들 나온다.
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