#include <stdio.h>
#include <string.h>


typedef struct {
	char name[30];
	int age;
	char grade;
	}Student;

void main(void) {
	Student s1;

	FILE* file = fopen("C:\\Users\\±Ë¡§ø±\\source\\repos\\champion.txt", "r");

	while (fscanf(file, "%s %d %c", &s1.name, &s1.age, &s1.grade) == 3) {
		printf("name: %s age: %d grade: %c\n", s1.name, s1.age, s1.grade);
	}
}