#include <stdio.h>

/* null  ���� ��ġ �˾ƺ���
int main()
{
	int i;
	char ch;
	char str1[6] = "ABCDE";

	printf("--���ڿ� ���� ��--\n");
	printf("%s\n", str1);

	for (i = 0; i < 6; i++)
		printf("%c *", str1[i]);

	for (i = 0; i < 3; i++) {
		ch = str1[4 - i];
		str1[4 - i] = str1[i];
		str1[i] = ch;
	}
	printf("\n--���ڿ� ���� ��--\n");
	printf("%s\n\n", str1);

		return 0;
}*/

// null ������ ��ġ ����
int main()
{
	int i;
	char ch;
	char str2[6] = "ABCDE";

	printf("--���ڿ� ���� ��--\n");
	printf("%s\n", str2);

	for (i = 0; i < 6; i++)
		printf("%c *", str2[i]);

	for (i = 0; i < 4; i++) {
		ch = str2[5 - i];
		str2[5 - i] = str2[i];
		str2[i] = ch;
	}
	printf("\n--null ���� ��ġ ����--\n");
	printf("%s\n", str2);

	return 0;
}