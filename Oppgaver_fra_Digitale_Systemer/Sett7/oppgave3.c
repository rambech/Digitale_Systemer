#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(void){
	char psw[30];

	PASS:
	printf("Passord:");
	fgets(psw, 20, stdin);
	if(strlen(psw)<8+1){
		printf("Passordet må være minst 8 karakterer\n");
		goto PASS;
	}
	if(!isdigit(psw)){
		printf("Passordet må inneholde minst et tall\n");
		goto PASS;
	}
	if(!isupper(psw)){
		printf("Passordet må inneholde minst en stor bokstav\n");
		goto PASS;
	}
	if(!islower(psw)){
		printf("Passordet må inneholde minst en liten bokstav\n");
		goto PASS;
	}

	printf("\nPassordet er: %s\n", psw);
}

Mehhh, orker ikke