/* #include <stdio.h>

//444p. 10��
int main()
{
	int i;
	double data[10] = { 0,0 };

	for (i = 2; i <= 11; i++) {
		data[i - 2] = 1.0 / (i*(i + 1));
	}

	for (i = 0; i <= 9; i++) {
		printf("%d��° �� ��갪�� %.3lf �Դϴ�.\n ", i, data[i]);
	}

	return 0;
}
*/

#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

	char name[5][10] = { "������","����","�����","�����","�̸��" };

	int point[5][7] = {
		{ 97, 90, 88, 95, 0, 0, 0 },
		{ 76, 89, 75, 83, 0, 0, 0 },
		{ 60, 70, 88, 82, 0, 0, 0 },
		{ 83, 89, 92, 85, 0, 0, 0 },
		{ 75, 73, 72, 78, 0, 0, 0 }
		};

	int main(void) 
	{
		int i, j;

		printf("    �̸�      �߰�1   �߰�2   �⸻1   �⸻2    �հ�    ���   ���(����)\n");
		printf("---------------------------------------------------------------------------\n");

		for (i = 0; i < 5; i++) 
		{
			for (j = 0; j < 3; j++) 
			{
				point[i][4] = point[i][4] + point[i][j];
			}
			point[i][5] = point[i][4] / 4;
		}
		for (i = 0; i < 5; i++) {
			point[i][6]++;

			for (j = i + 1; j < 5; j++)

				if (point[i][5] > point[j][5])
					point[j][6]++;
				else
					point[i][6]++;
		}
		for (i = 0; i < 5; i++)
		{
			printf("%10s", name[i]);
			for (j = 0; j < 7; j++)
			{
				printf("%8d", point[i][j]);
			}
			printf("\n");
		}
		return 0;
	}
