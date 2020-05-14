#include <stdio.h>

/* null  문자 위치 알아보기
int main()
{
	int i;
	char ch;
	char str1[6] = "ABCDE";

	printf("--문자열 변경 전--\n");
	printf("%s\n", str1);

	for (i = 0; i < 6; i++)
		printf("%c *", str1[i]);

	for (i = 0; i < 3; i++) {
		ch = str1[4 - i];
		str1[4 - i] = str1[i];
		str1[i] = ch;
	}
	printf("\n--문자열 번경 후--\n");
	printf("%s\n\n", str1);

		return 0;
}*/

// null 문자의 위치 변경
int main()
{
	int i;
	char ch;
	char str2[6] = "ABCDE";

	printf("--문자열 변경 전--\n");
	printf("%s\n", str2);

	for (i = 0; i < 6; i++)
		printf("%c *", str2[i]);

	for (i = 0; i < 4; i++) {
		ch = str2[5 - i];
		str2[5 - i] = str2[i];
		str2[i] = ch;
	}
	printf("\n--null 문자 위치 변경--\n");
	printf("%s\n", str2);

	return 0;
}