#include <stdio.h>
#pragma warning(disable:4996)

/* while 문 사용하여 2에서 10까지의 짝수 출력
int main() {

	int i = 2;
	while (i <= 10) {
		printf("%3d", i); // %3d의 3은 3칸을 띠어쓰기하라
		i+= 2;
	}
	return 0;
}
*/

/* do while 문 사용하여 5개의 실수의 입력과 출력
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

/*  for문 사용하여 1부터 10까지의 곱의 출력
int main() {
	long mult = 1;

	for(int m = 1; m <= 10; m++)
		mult *= m;

	printf("%d\n", mult);
}
*/