#include <stdio.h>

void main() {
	printf("��/���� ���̸� �Է��ϼ���.(��, Ȧ���� ����): ");
	int length = 0;
	int n = 1;
	scanf("%d", &length);//���̸� �Է¹޴´�
	int arr[100][100] = { 0 };//�ִ� 100*100�� ũ�⸦ ���� �迭�� �����ϰ� �ʱ�ȭ�Ѵ�
	
	int a = 0, b = length / 2;//����� ���� �������� ù��° �� �߰����� �Ѵ�
	int c, d;//���� ���� �� �ڸ��� ��ǥ�� ��Ÿ����
	while (n <= length * length) {
		arr[a][b] = n;//���� �Է��Ѵ�
		c = a - 1;//�������� �̵��Ѵ�
		d = b + 1;//���������� �̵��Ѵ�
		n++;//������ �Էµ� ���̴�
		if (c < 0) {//��ȯ�� ���� �迭�� ũ�⸦ ����ٸ� �����Ѵ�
			c = length - 1;
		}
		if (d > length - 1) {//��ȯ�� ���� �迭�� ũ�⸦ ����ٸ� �����Ѵ�
			d = 0;
		}
		if (arr[c][d] != 0) {//�ڸ��� ä�����ִٸ�
			a++;//��ĭ �Ʒ��� �̵��Ѵ�
		}
		else {
			a = c;
			b = d;
		}
	}
	for (int i = 0; i < length; i++) {//�迭�� ����Ѵ�
		for (int j = 0; j < length; j++) {
			printf("%d	", arr[i][j]);
		}
		printf("\n");
	}
	int addall = 0;
	for (int i = 0; i < length; i++) {//���μ��δ밢�� ���� ũ�⸦ ���Ѵ�
		addall += arr[0][i];//��� ���� ���� �����Ƿ� �ϳ��� ���Ѵ�
	}
	printf("������ : %d\n", addall);
	printf("������ : %d\n", addall);
	printf("�밢�� : %d\n", addall);
}