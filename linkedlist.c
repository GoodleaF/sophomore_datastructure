#include <stdio.h>
#include <string.h>

#define MAX 1024

/* �Լ� ����
�� �Լ��� ���, char* �� �迭�� �ּҰ���, char �� �����͸� ���ڰ����� ���´�.
*/

int retToken(char* ori[], char* ptr);

main() {

    FILE* fp; //���� ������
    int index, data;
    char* inp;
    int buf_size = MAX * MAX;
    char* ptr;
    char* ori[MAX]; // ���ڿ��� �� �迭 

    fp = fopen("temp1.txt", "r");

    inp = malloc(buf_size);

    while (fgets(inp, buf_size, fp)) {
        // �Լ��� ori �迭�� �ּҿ� �Է¹��� ��Ʈ���� ����. 
        index = retToken(ori, inp);
    }

    for (data = 0; data < index; data++) {
        printf("%s \n", ori[data]);
    }
    fclose(fp);
}

int retToken(char* ori[], char* inp) {
    int i = 0;

    // strtok()�� �̿��Ͽ� ���ڿ��� ' ' ��ū�� �������� �ڸ�

    char* ptr = strtok(inp, " ");

    while (ptr != NULL) {
        ori[i] = ptr;
        ptr = strtok(NULL, " ");
        i++;
    }
    return i;
}

