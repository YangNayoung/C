/* 국,영,수 점수 입력받아 총점,평균 계산하고 switch문을 이용하여 평균에 따라 
 80점 이상 '잘함' 70점 이상 '보통' 50점 이상 '노력요망' 그 이하는 '능력부족' 출력 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kor;
	printf("국어점수 : ");
	scanf("%d", &kor);

	int eng;
	printf("영어점수 : ");
	scanf("%d", &eng);

	int mat;
	printf("수학점수 : ");
	scanf("%d", &mat);

	int sum = 0;
	sum = kor + eng + mat;

	float avg=0;
	avg = (float)sum / 3;

	switch ((int)avg/10)
	{
	case 10: case 9: case 8: printf("총점 : %d, 평균 : %.3f ==> 잘함\n", sum, avg); break;
	case 7: printf("총점 : %d, 평균 : %.3f ==> 보통\n", sum, avg); break;
	case 6: case 5: printf("총점 : %d, 평균 : %.3f ==> 노력요망\n", sum, avg); break;
	default: printf("총점 : %d, 평균 : %.3f == > 능력부족\n", sum, avg); break;
	}
}