/* 직원에 대한 근무시간, 시간당 수당을 입력 후 조건으로 급료 게산 후 출력 ( hour: 근무시간 / rate: 시간당 수당 )
 1) 근무시간 <=50이면, 급료 = 근무시간 * 시간당 수당       ( rpay: 50시간 이하에 대한 급료 / opay: 초과시간에 대한 급료 )
 2) 근무시간 >50이면, 급료는 초과시간(근무시간 -50)에 대하여 시간당 수당의 1.5배 지급    (tpay : 급료 총액(rapy+opay) ) */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hour = 0, rate = 0, rpay = 0, opay = 0, tpay = 0;

	printf("근무시간 입력 : ");
	scanf_s("%d", &hour);

	printf("시간당수당 입력 : ");
	scanf_s("%d", &rate);

	if (hour <= 50)
		rpay = hour * rate;

	if (hour > 50) {
		opay = (hour - 50)*rate*1.5;
		rpay = 50 * rate;
	}

	printf("총 급여는 %d원 입니다.\n", tpay = rpay + opay);
}