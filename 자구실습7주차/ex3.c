#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "ex3.h"

void main() {
	char c;

	read_record(fname);

	printf("********** ��ɾ� **********\n");
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
	scanf("%s", name);//�̸��� �Է¹޴´�
	
	for (i = 0; i < num_record; i++) {
		if (name == r[i].name) {//�Է¹��� �̸��� ���� �̸��� ã�´ٸ�
			printf("%s", r[i].grade);//���� �̸��� ������ ����Ѵ�
			j++;
		}

	}	
	if (j == 0) {//�Է¹��� �̸��� ���� �̸��� ���ٸ�
		printf("No such name\n");
	}
}

void change_record() {
	int i;
	int j = 0;
	char name[10], grade[4];

	printf("\nName: ");
	scanf("%s", name);//�̸��� �Է¹޴´�
	printf("Grade: ");
	scanf("%s", grade);//������ �Է¹޴´�
	
	for (i = 0; i < num_record; i++) {
		if (name == r[i].name) {//�Է¹��� �̸��� ���� �̸��� �ִٸ�
			*r[i].grade = grade;//�� �̸��� ������ �Է¹��� �������� ��ü�Ѵ�
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
		fputs("%10s %10d %10s \n", &r[i].name, r[i].id, &r[i].grade);//read_record���� ���� ���ڿ����� �ٽ� �Է��Ѵ�.
	}

	printf("\n\n%d records have been written to %s.\n", num_record, fname);
	fclose(ofp);
}
/*�־��� �Լ��� ä�������� �õ��Ͽ����� search, change �Լ������� �Է¹��� name�� r�� ����� �̸��� ������ ���ϰ� �ֽ��ϴ�.
write �Լ������� fputs�� ����ϴ��� �� �𸣰ڽ��ϴ�. ���� ���� �� �ٽ� ���� �ÿ��� grade.txt�� ������ �� ������� ������ ���� ����ǰ� ���� ���� �� �����ϴ�.*/