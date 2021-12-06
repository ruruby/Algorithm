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
			if ((i + 1) % 2 == 0)//대각선으로 짝수개 만큼의 숫자를 넣을 경우
				MyArray[i - j + a][j + a] = n;//우상향으로 점점 숫자가 커지게 넣어준다.
			else//대각선으로 홀수개 만큼의 숫자를 넣을 경우
				MyArray[j + a][i - j + a] = n;//오른쪽부터 시작해서 왼쪽 아래쪽으로 점점 숫자가 커지게 넣어준다.
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
