#include <stdio.h>
MAX_TERM = 10;
struct polynomial {
	float coef;//���
	int expon;//����
};
void padd(int starta, int finisha, int startb, int finishb) {//A(x)�� B(x)�� ���ؼ� D(x)����
	if (starta == startb) {//������ ���ٸ�
		finisha += finishb;//����� ���Ѵ�
	}
}
void attach(float coefficient, int exponent) {//���ο� ���� ���׽Ŀ� ÷��
	printf("����: ");
	scanf("%d", exponent);
	printf("���: ");
	scanf("%f", coefficient);
}
void main() {
	printf("A(x) �Է�: \n");
	struct polynomial A[10];
	for(int i=0;i<10;i++) {
		attach(A[i].coef, A[i].expon);
		if (A[i].expon == 0)
			break;
	}
	printf("B(x) �Է�: \n");
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
	printf("��� ����\n");
	for (int i = 0; i < 10; i++) {
		printf("%f %d\n", A[i].coef, A[i].expon);
		if (A[i].expon == 0) {
			break;
		}
	}
}