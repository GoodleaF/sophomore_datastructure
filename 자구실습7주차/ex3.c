#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "ex3.h"

void main() {
	char c;

	read_record(fname);

	printf("********** 명령어 **********\n");
	printf("P: Print all records\n");
	printf("S: search record\n");
	printf("C: change grade\n");
	printf("W: write record\n");
	printf("Q: save and quit\n");

	while (1) {
		printf("\nCommand> ");
		c = getch();
		putch(c);
		c = toupper(c);

		switch (c) {
		case 'P':
			print_record();
			break;

		case 'S':
			search_record();
			break;

		case 'C':
			change_record();
			break;
		
		case 'W':
			write_record(fname);
			break;

		case 'Q':
			printf("\n");
			exit(1);
			break;
		default:
			printf("Unknown command!\n");
			break;
		}
	}
}

void read_record(char* fname) {
	int i = 0;
	FILE* ifp;

	ifp = fopen(fname, "r");
	while (fscanf(ifp, "%s %d %s", r[i].name, &r[i].id, r[i].grade) == 3)
		++i;

	num_record = i;
	fclose(ifp);
}

void print_record() {
	int i;

	printf("\n----------------------------------- \n");
	for (i = 0; i < num_record; i++) {
		printf("%10s %10d %10s \n", r[i].name, r[i].id, r[i].grade);
	}
	printf("---------------------------------- \n");
}

void search_record() {
	int i;
	int j = 0;
	char name[10];

	printf("\n Search name: ");
	scanf("%s", name);//이름을 입력받는다
	
	for (i = 0; i < num_record; i++) {
		if (name == r[i].name) {//입력받은 이름과 같은 이름을 찾는다면
			printf("%s", r[i].grade);//같은 이름의 성적을 출력한다
			j++;
		}

	}	
	if (j == 0) {//입력받은 이름과 같은 이름이 없다면
		printf("No such name\n");
	}
}

void change_record() {
	int i;
	int j = 0;
	char name[10], grade[4];

	printf("\nName: ");
	scanf("%s", name);//이름을 입력받는다
	printf("Grade: ");
	scanf("%s", grade);//성적을 입력받는다
	
	for (i = 0; i < num_record; i++) {
		if (name == r[i].name) {//입력받은 이름과 같은 이름이 있다면
			*r[i].grade = grade;//그 이름의 성적을 입력받은 성적으로 교체한다
			j++;
		}
	}
	if (j == 0) {
		printf("No such name\n");
	}
}

void write_record(char* fname) {
	int i = 0;
	FILE* ofp;

	if ((ofp = fopen(fname, "w")) == NULL) {
		printf("No such file!\n");
		exit(1);
	}
	printf("\n");
	for (i = 0; i < num_record; i++) {
		fputs("%10s %10d %10s \n", &r[i].name, r[i].id, &r[i].grade);//read_record에서 받은 문자열들을 다시 입력한다.
	}

	printf("\n\n%d records have been written to %s.\n", num_record, fname);
	fclose(ofp);
}
/*주어진 함수를 채워보려고 시도하였으나 search, change 함수에서는 입력받은 name과 r에 저장된 이름을 비교하지 못하고 있습니다.
write 함수에선는 fputs를 사용하는지 잘 모르겠습니다. 또한 실행 후 다시 실행 시에는 grade.txt의 내용이 다 사라지는 것으로 보아 저장되고 있지 않은 것 같습니다.*/