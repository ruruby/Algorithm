#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double power(double x, int n) {
	printf("power호출됨 ---> x : %f, n : %d\n", x, n);
	if (n == 1) return x;//n이 1일 경우
	if (n % 2 == 0) return power(x*x, n/2);
	else if (n % 2 == 1) return x*power(x*x, (n-1)/2);
}

int main(void) {
	double x;
	int n;
	printf("x의 n제곱 계산 , x와 n을 입력하시오 : ");
	scanf("%lf %d", &x, &n);
	printf("%f\n", power(x, n));
}


