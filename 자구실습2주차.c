#include <stdio.h>
void main(void) {
	
	char ch='  ';
	char name[10];
	int i = 0;
	while (ch != '\n') {
		ch = getchar();
		name[i] = ch;
		i++;		
	}
	name[i] = '\0';

	i = 0;
	printf("name entered: ");
	while (name[i] != '\0') {
		putchar(name[i]);
		i++;
	} 
}