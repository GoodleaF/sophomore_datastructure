#include <stdio.h>

void main(void) {
	int x = 4;
	int y = 0;

	for (int i = 0; i < 5; i++) {
		y = ++x; //x++에서 ++위치를 수정하여 y아래 첫번째 출력 문 y값이 9가 나오게 수정 하시오.
	}

	printf("The value of y after for loop: %d \n", y);
	printf("The value of y after for loop: %d \n", ++y);
	printf("The value of y after for loop: %d \n", ++y);
}
