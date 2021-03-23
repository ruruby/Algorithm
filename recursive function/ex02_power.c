#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double power(double x, int n) {
	if (n == 0)
		return 1.0;
	return  x * power(x, n - 1);
}

int main(void) {
	double x;
	int n;
	printf("x의 n제곱 계산 , x와 n를 입력하시오 : ");
	scanf("%lf %d", &x, &n);
	printf("%f", power(x, n));
}