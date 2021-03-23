#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}
int main(void) {
	int a;
	printf("양의 정수를 입력하시오 : ");
	scanf("%d", &a);
	printf("%d", fib(a));
}