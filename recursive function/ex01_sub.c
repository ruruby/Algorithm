#include<stdio.h>

int sub(int n)
{
	int result = 0;
	for (int i = n; i >= 0; i=i-3) {
		result += i;
	}
	return result;
}
int main(void) {
	printf("%d",sub(10));
}