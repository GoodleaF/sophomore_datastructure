#include <stdio.h>
#define SWAP(x,y,t)(t=x, x=y, y=t)

void permutation(char list[], int i, int n) {
	int j, temp;
	if (i == n) {
		for (j = 0; j <= n; j++)
			printf("%c", list[j]);
		printf("    ");
	}
	else {
		for (j = i; j <= n; j++) {
			SWAP(list[i], list[j], temp);
			permutation(list, i + 1, n);
			SWAP(list[i], list[j], temp);
		}
	}
}

void main(void) {
	char list[3] = { 'a','b','c' };
	int size = sizeof(list) / sizeof(list[0]);
	for (int i = 0; i < 3; i++)
		printf("%c\n", list[i]);
	permutation(list, 0, size - 1);
}