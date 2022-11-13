#include <stdio.h>
#include <stdlib.h>

int stack[5];//스택의 크기이다
int top = -1;

int push(int n) {// 숫자를 입력받아 스택에 넣는다
	if (top >= 4) {//스택이 꽉 찼을 경우
		printf("overflow\n");
	}
	else {
		top++;//숫자를 입력할 스택의 위치를 가르킨다
		stack[top] = n;//스택에 입력 받은 숫자를 저장한다
		printf("%d is pushed\n", n);
	}
}
int pop() {//FILO 구조상 마지막에 입력된 값을 출력하고 스택을 비운다
	if (top < 0) {//스택이 비었을 경우
		printf("downflow\n");
	}
	else {
		printf("%d is popped\n", stack[top]);
		stack[top] = 0;//스택을 비운다
		top--;//채워져 있는 스택을 가르킨다
	}
}
int print() {
	for (int i = 0; i < 5; i++) {//스택에 저장된 숫자들을 출력한다
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