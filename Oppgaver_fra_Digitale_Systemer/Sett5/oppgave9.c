#include <stdio.h>

// Hopper over denne oppgaven

int main(void){
	unsigned int x, tall, res;
	printf("Skriv inn et hex tall:\n");
	scanf("%i", &x);
	//for (int i = 0; i < )
	printf("Skriv inn et tall mellom 0 og 7:\n");
	scanf("%d", tall);
	res = x | tall;
	printf("Tallet %i inneholder tallet %d\n", x, res);

}