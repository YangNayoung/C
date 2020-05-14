// 3번 반복하며 0 이하이거나 100이 넘으면 다시 입력

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char id[5], name[7];
	int kor, eng, mat, c, total = 0, count=1;
	float avg = 0;

	// 입력
	while (count <= 3)
	{
		printf("======================================\n");
		printf("학번을 입력하시오(숫자로): ");
		scanf("%s", id);
		printf("이름을 입력하시오: ");
		scanf("%s", name);
		while (1) {
			printf("국어점수를 입력하시오: ");
			scanf("%d", &kor);
			if (!(kor < 0 || kor > 100)) break;
			printf("국어점수 오류\n");
		}
		while (1) {
	     	printf("영어점수를 입력하시오: ");
		    scanf("%d", &eng);
		    if (!(eng < 0 || eng > 100)) break;
			printf("영어점수 오류\n");
		}
		while (1) {
		    printf("수학점수를 입력하시오: ");
		    scanf("%d", &mat);
			if (!(mat < 0 || mat > 100)) break;
			printf("수학점수 오류\n");
		}
		while (1) {
		    printf("C점수를 입력하시오 : ");
		    scanf("%d", &c);
			if (!(c < 0 || c > 100)) break;
			printf("C점수 오류\n");
		}// 입력 끝

		// 총점, 평균
		total = kor + eng + mat + c;
		avg = (float)(total / 4.0);
		printf("--------------------------------------\n");
		printf("\n");
		printf("%s %s %d %d %d %d %d %.2f", id, name, kor, eng, mat, c, total, avg); // 총점, 평균 끝
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

		// 등급
		float avg1 = avg / 10;
		switch ((int)avg1) {
		case 10:case 9: printf(" A\n"); break;
		case 8:printf(" B\n"); break;
		case 7:printf(" C\n"); break;
		case 6:printf(" D\n"); break;
		default: printf(" F\n"); break;
		} // 등급 끝
		count++;
	}
}