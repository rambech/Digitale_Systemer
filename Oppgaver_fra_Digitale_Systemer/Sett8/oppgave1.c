#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	char navn[30];
	const char s[2] = " ";
	char *fornavn;
	char *etternavn;
	
	printf("Hva heter du?\n");
	fgets(navn, 30, stdin);

	char *newline = strchr(navn, '\n');
	if(newline) *newline = 0;

	fornavn = strtok(navn, s);

	etternavn = strtok(NULL, s);

	printf("%s, %s\n", etternavn, fornavn);

}	