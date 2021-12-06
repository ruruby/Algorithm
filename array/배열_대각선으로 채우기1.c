#include <stdio.h>
int main() {
	int MyArray[5][5];
	int i;//사선으로 숫자를 넣는 횟수
	int n = 0;//배열에 넣어줄 값
	int a = 0;//k가 4를 초과할 더해줄 값
	for (int k = 0; k <= 8; k++) {//사선으로 숫자를 넣어줘야하는 횟수인 9번을 반복
		i = k;
		if (k > 4) {//배열을 절반으로 나누는 사선 이후로 배열 원소의 갯수가 적어지도록 k값 조절
				i = 8 - k;
			a = k - 4;
		}
		for (int j = 0; j <= i; j++) {//i의 횟수만큼만 반복
			n++;
			MyArray[i - j + a][j + a] = n;
		}
	}
	//배열 출력
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			printf("%d\t", MyArray[i][j]);
		printf("\n");
	}
	return 0;
}