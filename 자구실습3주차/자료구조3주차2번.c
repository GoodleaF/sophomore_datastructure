#include <stdio.h>

float rsum(float list[], int n)
{
	if (n) return rsum(list, n - 1) + list[n - 1];
	return n;
}

void main(void) {
	float list[10];
	int size = sizeof(list) / sizeof(list[0]);

	for (int i = 0; i < size - 1; i++) {
		list[i] = i;
	}
	list[9] = 9.5;
	float value = rsum(list, size);
	printf("value: %f \n", value);

}