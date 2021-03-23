#include <stdio.h>

int hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 0)return 0;
	hanoi_tower(n - 1, from, to, tmp);//위에 있는 원판들 임시지점에 옮기기
	printf("원판 %d를 %c에서 %c로 옮긴다.\n", n,from,to);//가장 아래의 원판 목적지로 이동
	hanoi_tower(n - 1, tmp, from, to);//작은 원판들 목적지로 이동
}

int main(void) {
	hanoi_tower(4, 'A', 'B', 'C');
	return 0;
}

