#include <stdio.h>

int main()
{
	int score;
	int star[5] = { 0 };
	printf("점수 입력 : ");
	int max = 0;
	int min = 100;

	while (1) {
		scanf_s("%d", &score);
		if (score < 0) break;

		switch (score/10)
		{
		case 10: case 9: star[0]++; break;
		case 8: star[1]++; break;
		case 7: star[2]++; break;
		case 6: star[3]++; break;

		default: star[4]++;
		}
		if (max < score) max = score;
		if (min > score) min = score;
	}
	char *label[] = { "90점 이상 ","80점 대","70점 대", "60점 대", "60점 이하" };
	for (int i = 0; i <= 4; i++) {
		printf("%s : ", label[i]);
		for (int j = 0; j < star[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("최고점수 : %d\n", max);
	printf("최저점수 : %d\n", min);

	return 0;
}