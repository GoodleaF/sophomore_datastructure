#include <stdio.h>
#include <stdlib.h>

int stack[5];//������ ũ���̴�
int top = -1;

int push(int n) {// ���ڸ� �Է¹޾� ���ÿ� �ִ´�
	if (top >= 4) {//������ �� á�� ���
		printf("overflow\n");
	}
	else {
		top++;//���ڸ� �Է��� ������ ��ġ�� ����Ų��
		stack[top] = n;//���ÿ� �Է� ���� ���ڸ� �����Ѵ�
		printf("%d is pushed\n", n);
	}
}
int pop() {//FILO ������ �������� �Էµ� ���� ����ϰ� ������ ����
	if (top < 0) {//������ ����� ���
		printf("downflow\n");
	}
	else {
		printf("%d is popped\n", stack[top]);
		stack[top] = 0;//������ ����
		top--;//ä���� �ִ� ������ ����Ų��
	}
}
int print() {
	for (int i = 0; i < 5; i++) {//���ÿ� ����� ���ڵ��� ����Ѵ�
		printf("%d ", stack[i]);
	}
	printf("\n");
}
void main() {
	int n;
	int input;
	printf("1.push 2.pop 3.print 0.exit >>\n");
	scanf("%d", &n);
	while (n != 0) {
		switch (n)
		{
		case 1:
			printf(">> ");
			scanf("%d", &input);
			push(input);
			printf("1.push 2.pop 3.print 0.exit >>\n");
			scanf("%d", &n);
			break;
		case 2:
			pop();
			printf("1.push 2.pop 3.print 0.exit >>\n");
			scanf("%d", &n);
			break;
		case 3:
			print();
			printf("1.push 2.pop 3.print 0.exit >>\n");
			scanf("%d", &n);
			break;
		case 0:
			n = 0;
			break;
		default:
			printf("wrong input\n");
			printf("1.push 2.pop 3.print 0.exit >>\n");
			scanf("%d", &n);
			break;
		}
	}
}