#include <stdio.h>
#include <string.h>

#define MAX 1024

/* 함수 선언
이 함수의 경우, char* 형 배열의 주소값과, char 형 포인터를 인자값으로 갖는다.
*/

int retToken(char* ori[], char* ptr);

main() {

    FILE* fp; //파일 포인터
    int index, data;
    char* inp;
    int buf_size = MAX * MAX;
    char* ptr;
    char* ori[MAX]; // 문자열이 들어갈 배열 

    fp = fopen("temp1.txt", "r");

    inp = malloc(buf_size);

    while (fgets(inp, buf_size, fp)) {
        // 함수로 ori 배열의 주소와 입력받은 스트링을 전달. 
        index = retToken(ori, inp);
    }

    for (data = 0; data < index; data++) {
        printf("%s \n", ori[data]);
    }
    fclose(fp);
}

int retToken(char* ori[], char* inp) {
    int i = 0;

    // strtok()을 이용하여 문자열을 ' ' 토큰을 기준으로 자름

    char* ptr = strtok(inp, " ");

    while (ptr != NULL) {
        ori[i] = ptr;
        ptr = strtok(NULL, " ");
        i++;
    }
    return i;
}

