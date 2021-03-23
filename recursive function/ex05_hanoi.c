#include <stdio.h>

int hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 0)return 0;
	hanoi_tower(n - 1, from, to, tmp);//���� �ִ� ���ǵ� �ӽ������� �ű��
	printf("���� %d�� %c���� %c�� �ű��.\n", n,from,to);//���� �Ʒ��� ���� �������� �̵�
	hanoi_tower(n - 1, tmp, from, to);//���� ���ǵ� �������� �̵�
}

int main(void) {
	hanoi_tower(4, 'A', 'B', 'C');
	return 0;
}

