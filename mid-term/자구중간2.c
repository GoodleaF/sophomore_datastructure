#include <stdio.h>

void main() {
	printf("행/열의 길이를 입력하세요.(단, 홀수만 가능): ");
	int length = 0;
	int n = 1;
	scanf("%d", &length);//길이를 입력받는다
	int arr[100][100] = { 0 };//최대 100*100의 크기를 가진 배열을 가정하고 초기화한다
	
	int a = 0, b = length / 2;//보기와 같이 시작점을 첫번째 줄 중간으로 한다
	int c, d;//다음 수가 들어갈 자리의 좌표를 나타낸다
	while (n <= length * length) {
		arr[a][b] = n;//수를 입력한다
		c = a - 1;//위쪽으로 이동한다
		d = b + 1;//오른쪽으로 이동한다
		n++;//다음에 입력될 수이다
		if (c < 0) {//순환을 위해 배열의 크기를 벗어난다면 조정한다
			c = length - 1;
		}
		if (d > length - 1) {//순환을 위해 배열의 크기를 벗어난다면 조정한다
			d = 0;
		}
		if (arr[c][d] != 0) {//자리가 채워져있다면
			a++;//한칸 아래로 이동한다
		}
		else {
			a = c;
			b = d;
		}
	}
	for (int i = 0; i < length; i++) {//배열을 출력한다
		for (int j = 0; j < length; j++) {
			printf("%d	", arr[i][j]);
		}
		printf("\n");
	}
	int addall = 0;
	for (int i = 0; i < length; i++) {//가로세로대각의 합의 크기를 구한다
		addall += arr[0][i];//모든 행의 합은 같으므로 하나만 구한다
	}
	printf("세로합 : %d\n", addall);
	printf("가로합 : %d\n", addall);
	printf("대각합 : %d\n", addall);
}