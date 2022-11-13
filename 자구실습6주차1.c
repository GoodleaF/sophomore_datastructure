#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int m, n, temp;
	int count = 0;
	int same = 0;
	int* A = (int*)malloc(sizeof(int));
	int* B = (int*)malloc(sizeof(int));
	int* Same = (int*)malloc(sizeof(int));
	int* All = (int*)malloc(sizeof(int));
	srand((unsigned int)time(NULL));
	printf("Enter size of A and B: ");	
	scanf("%d %d",&n,&m);//A�� B�� ũ�⸦ �Է¹޴´�
	for (int i = 0; i < n; i++) {//�ߺ����� ���� ����� ���� �迭 A
		A[i] = (rand() % 100) + 1;
		for (int j = 0; j < i; j++) {
			if (A[i] == A[j]) {				
				i--;
				break;
			}
		}		
	}
	for (int i = 0; i < m; i++) {//�ߺ����� ���� ����� ���� �迭 B
		B[i] = (rand() % 100) + 1;
		for (int j = 0; j < i; j++) {
			if (B[i] == B[j]) {
				i--;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++) {//�������� ���Ѵ�
		for (int j = 0; j < m; j++) {
			if (A[i] == B[j]) {
				Same[same] = A[i];
				same++;
			}
		}		
	}
	
	
	for (int i = 0; i < n; i++) {//�������� ���Ѵ�
		All[i] = A[i];
	}
	for (int i = 0; i < m; i++) {
		All[i + n] = B[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i] == B[j]) {
				All[n + j] = 0;				
			}
		}
	}
	for (int i = 0; i < m; i++) {
		if (All[n + i] != 0) {
			All[n + count] = All[n + i];
			count++;
		}
	}
	for (int i = 0; i < n; i++) {//A����
		for (int j = i + 1; j < n; j++) {
			if (A[i] > A[j]) {
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;

			}
		}
	}
	for (int i = 0; i < m; i++) {//B����
		for (int j = i + 1; j < m ; j++) {
			if (B[i] > B[j]) {
				temp = B[i];
				B[i] = B[j];
				B[j] = temp;

			}
		}
	}
	if (same != 0) {
		for (int i = 0; i < same; i++) {//������ ����
			for (int j = i + 1; j < same; j++) {
				if (Same[i] > Same[j]) {
					temp = Same[i];
					Same[i] = Same[j];
					Same[j] = temp;

				}
			}
		}
	}
	for (int i = 0; i < n + m - same; i++) {//������ ����
		for (int j = i + 1; j < n + m - same; j++) {
			if (All[i] > All[j]) {
				temp = All[i];
				All[i] = All[j];
				All[j] = temp;

			}
		}
	}
	printf("���� A: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", A[i]);
	}
	printf("\n���� B: ");
	for (int i = 0; i < m; i++) {
		printf("%d ", B[i]);
	}
	if (same!=0) {
		printf("\n���� A�� B�� ������: ");
		for (int i = 0; i < same; i++) {
			printf("%d ", Same[i]);
		}
	}
	else {
		printf("\n���� A�� B�� ������: �������� ����");
	}
	printf("\n���� A�� B�� ������: ");
	for (int i = 0; i < n + m - same; i++) {
		printf("%d ", All[i]);
	}
	int k = 0, l = 0;
	printf("\n���� A, B�� ũ�⸦ �ٽ� ���ϼ���: ");
	scanf("%d %d", &k, &l);//k,l ���� �Է¹޴´�.
	
	A = calloc(*A, k * sizeof(int));
	B = calloc(*B, l * sizeof(int));
	
	for (int i = 0; i < k; i++) {//�ߺ����� ���� ����� ���� �迭 A
		A[i] = (rand() % 100) + 1;
		for (int j = 0; j < i; j++) {
			if (A[i] == A[j]) {
				i--;
				break;
			}
		}
	}
	for (int i = 0; i < l; i++) {//�ߺ����� ���� ����� ���� �迭 B
		B[i] = (rand() % 100) + 1;
		for (int j = 0; j < i; j++) {
			if (B[i] == B[j]) {
				i--;
				break;
			}
		}
	}
	for (int i = 0; i < k; i++) {//A����
		for (int j = i + 1; j < k; j++) {
			if (A[i] > A[j]) {
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;

			}
		}
	}
	for (int i = 0; i < l; i++) {//B����
		for (int j = i + 1; j < l; j++) {
			if (B[i] > B[j]) {
				temp = B[i];
				B[i] = B[j];
				B[j] = temp;

			}
		}
	}
	printf("\n���� A: ");
	for (int i = 0; i < k; i++) {
		printf("%d ", A[i]);
	}
	printf("\n���� B: ");
	for (int i = 0; i < l; i++) {
		printf("%d ", B[i]);
	}
	
}