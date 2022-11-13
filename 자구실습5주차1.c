#include <stdio.h>\
#include <stdlib.h>
#include <time.h>

void print(int *num, int n) {
	for (int i = 0; i < n; i++) {
		num[i] = i + 1;
		printf("%d ", num[i]);
	}
	printf("\n");
	for (int i = n; i > 0; i--) {
		*(num + i) = i;
		printf("%d ", num[i]);
	}
	printf("\n");
}

void selectionSort(int *num[], int n) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < n; i++) {
		num[i] = rand() % n + 1;
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				i--;
				break;
			}
		}
	}
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (num[j] < num[min])
				min = j;
		}
		if (min != i) {
			int t = num[i];
			num[i] = num[min];
			num[min] = t;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}

}
void main() {
	int size;
	int *num;	
	printf("Enter size: ");
	scanf("%d", &size);
	num = (int*)malloc(sizeof(int) *size);
	print(num, sizeof(num[size]) / sizeof(int));
	selectionSort(num, sizeof(num[size]) / sizeof(int));

	return 0;
}
