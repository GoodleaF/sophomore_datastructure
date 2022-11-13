#include <stdio.h>
MAX_TERM = 10;
struct polynomial {
	float coef;//계수
	int expon;//지수
};
void padd(int starta, int finisha, int startb, int finishb) {//A(x)와 B(x)를 더해서 D(x)생성
	if (starta == startb) {//지수가 같다면
		finisha += finishb;//계수를 더한다
	}
}
void attach(float coefficient, int exponent) {//새로운 항을 다항식에 첨가
	printf("지수: ");
	scanf("%d", exponent);
	printf("계수: ");
	scanf("%f", coefficient);
}
void main() {
	printf("A(x) 입력: \n");
	struct polynomial A[10];
	for(int i=0;i<10;i++) {
		attach(A[i].coef, A[i].expon);
		if (A[i].expon == 0)
			break;
	}
	printf("B(x) 입력: \n");
	struct polynomial B[10];
	for (int i = 0; i < 10; i++) {
		attach(B[i].coef, B[i].expon);
		if (B[i].expon == 0)
			break;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			padd(A[i].expon, A[i].coef, B[i].expon, B[i].coef);
		}
	}
	printf("계수 지수\n");
	for (int i = 0; i < 10; i++) {
		printf("%f %d\n", A[i].coef, A[i].expon);
		if (A[i].expon == 0) {
			break;
		}
	}
}