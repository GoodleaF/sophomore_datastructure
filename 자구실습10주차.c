#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef struct {
	int key;
	char function_name[100];
}element;

element stack[MAX_STACK_SIZE];

int top = -1;

void push(element item) {
	if (top >= MAX_STACK_SIZE - 1) {
		fprintf(stderr, "stack is full\n");
		exit(EXIT_FAILURE);
	}
		//stackFull();
	stack[++top] = item;
}

element isEmpty() {	
	element e;
	if (top < 0) {
		e.key = 1;
	}
	return e;
}

element pop() {
	if (top < 0) {
		fprintf(stderr, "stack is empty\n");
		exit(EXIT_FAILURE);
	}
	return stack[top--];
}

void main() {
	element e;
	e.key = 0;
	strcpy(e.function_name, "recursiveBinary");
	push(e);
	recursiveBinary(5);
	element temp = pop();
	printf("%s %d \n", temp.function_name, temp.key);
	
	printf("interative binary call system stack status: \n");
	e.key = 0;
	strcpy(e.function_name, "recursiveBinary");
	push(e);
	interativeBinary(5);
	temp = pop();
	printf("%s %d \n", temp.function_name, temp.key);
}

recursiveBinary(int num) {
	static int count = 1;
	if (num) {
		int remnant = num % 2;
		element e;
		e.key = count++;
		strcpy(e.function_name, "recursiveBinary");
		push(e);
		recursiveBinary(num / 2);
		element temp = pop();
		printf("%s %d \n", temp.function_name, temp.key);
		printf("%d", remnant);	
	}
}

interativeBinary(int num) {
	int temp[100];
	int cnt = 0;
	while (num != 0) {
		int remnant = num % 2;
		temp[cnt++] = remnant;
		num = num / 2;
	}
	for (int i = cnt - 1; i >= 0; i--)
		printf("%d", temp[i]);
	printf("\n");
}