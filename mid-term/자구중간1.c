#include <stdio.h>

void main() {
	int arr[10][10] = { '\0' };//�迭�� �ʱ�ȭ���ش�
	int n = 1;
	for (int i = 1; i < 11; i++) {
		for (int j = 0; j < i; j++) {
			arr[i - 1][j + 10 - i] = n;//����� ���� �������� n ���� 1�� ������Ű�� �Է��Ѵ�
			n++;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == 0) {
				printf("%c	", arr[i][j]);//0�� �ƴ� ��ĭ���� ��µǵ��� %c�� ����Ѵ�
			}
			else {
				printf("%d	", arr[i][j]);//n�� ���� ����Ѵ�
			}
		}
		printf("\n");
	}
}