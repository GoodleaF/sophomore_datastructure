#include <stdio.h>

void main(void) {
	int x = 4;
	int y = 0;

	for (int i = 0; i < 5; i++) {
		y = ++x; //x++���� ++��ġ�� �����Ͽ� y�Ʒ� ù��° ��� �� y���� 9�� ������ ���� �Ͻÿ�.
	}

	printf("The value of y after for loop: %d \n", y);
	printf("The value of y after for loop: %d \n", ++y);
	printf("The value of y after for loop: %d \n", ++y);
}
