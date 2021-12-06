#include <stdio.h>
#include <stdlib.h>
int main() {
	int MyArray[5][5];
	int n = 1;//배열에 넣어줄 값
	int x = 2;//처음 원소를 기입할 행
	int y = 2;//처음 원소를 기입할 열
	int a = -1;//처음 x값에 -1을 하고, 이를 이용해서 a,b값을 앞으로 모두 조절하기 위한
	배열의 행 위치 조절 초기값 설정
		int b = 0;//배열의 열 위치 조절 초기값
	MyArray[x][y] = n;//처음 기입할 (2,2)지점에 원소를 넣음
	//배열 출력
	for (int i = 0; i < 5; i++) {//5종류의 반복을 하기 위한 반복문
		for (int j = 0; j < 2; j++) {//마지막 한 종류를 제외하고는 종류당
			2번씩을 수행하기 위한 반복문
				for (int k = 0; k < i + 1; k++) {//채워야할 배열 원소의 수
					n++;//배열 원소에 넣어줄 숫자 증가
					x = x + a;//행의 위치 변경
					y = y + b;//열의 위치 변경
					MyArray[x][y] = n;//배열 원소에 값 지정
				}
			if (abs(a) > 0) {//a가 0이 아닐 경우
				b = -a;//b에 -a값을 넣고, a에 0값을 지정
				a = 0;
			}
			else {//a가 0일 경우
				a = -b;//a에 -b값을 넣고, b에 0값을 지정
				b = 0;
			}
			if (i == 4)//i가 4가 되어 한 번 배열을 채웠을 경우, 이미
				모든 배열을 채우고 난 뒤므로 반복문을 탈출
				break;
		}
		a = -a;//a의 부호 변경
		b = -b;//b의 부호 변경
	}
	//배열 출력
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			printf("%d\t", MyArray[i][j]);
		printf("\n");
	}
	return 0;
}
