#include <stdio.h>

struct deltager
{
	char navn[30];
	int poeng;
};


int main(void){
	struct deltager jim, tom;

	printf("Navn 1: ");
	scanf("%s", jim.navn);
	printf("Poeng:");
	scanf("%d", &jim.poeng);

	printf("Navn 2: ");
	scanf("%s", tom.navn);
	printf("Poeng:");
	scanf("%d", &tom.poeng);

	if(tom.poeng<jim.poeng){
		printf("%s, vinner\n", jim.navn);
	} else {
		printf("%s, vinner\n", tom.navn);

	}

}