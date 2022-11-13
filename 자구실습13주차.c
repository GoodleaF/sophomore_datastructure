#include <stdio.h>

int heap[200];
int n = 0;

void push(int item, int *n) {
	int i;
	i = ++(*n);
	while (i != 1 && item > heap[i / 2]) {
		heap[i] = heap[i / 2];
		i = i / 2;
	}
	heap[i] = item;
}

void main() {
	int num = 1;
	while (num!=0) {
		printf("Enter a number(Exit: 0): ");
		scanf("%d", &num);
		push(num, &n);
		printf("%d\n", heap[1]);
	}
}