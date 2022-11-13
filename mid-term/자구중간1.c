#include <stdio.h>

void main() {
	int arr[10][10] = { '\0' };//배열을 초기화해준다
	int n = 1;
	for (int i = 1; i < 11; i++) {
		for (int j = 0; j < i; j++) {
			arr[i - 1][j + 10 - i] = n;//보기와 같이 나오도록 n 값을 1씩 증가시키며 입력한다
			n++;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == 0) {
				printf("%c	", arr[i][j]);//0이 아닌 빈칸으로 출력되도록 %c로 출력한다
			}
			else {
				printf("%d	", arr[i][j]);//n의 값을 출력한다
			}
		}
		printf("\n");
	}
}