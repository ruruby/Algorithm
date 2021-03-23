#define _CRT_SECUR7869678E_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
	if (a >= b) {
		if (a%b == 0) return b;
		else return gcd(b, a%b);
	}
	else if (a < b) {
		if (b%a == 0) return a;
		else return gcd(a, b%a);
	}
}
int main(void) {
	int a, b;
	printf("두 개의 수를 입력하시오 (a b): ");
	scanf("%d %d", &a, &b);
	printf("gcd : %d", gcd(a, b));
}

