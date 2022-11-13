#include <stdio.h>

void main() {
	char* m = " Data Structures in C ";
	int i, j, k;
	k = strlen(m);
	for (i = 0; i < k; i++) {
		for (j = 0; j <= i; j++) {
			printf("%c", *(m + j));
		}
		printf("\n");
	}
	
}