#include <stdio.h>

void s_og_p();

int main(void){
	int a = 2;
	int b = 4;

	int sum, produkt;

	s_og_p(a, b, &sum, &produkt);
	printf("x = %d, y = %d, summen = %d, produktet = %d\n", a, b, sum, produkt);

	return 0;
}


void s_og_p(int x, int y, int *ptrSum, int *ptrProdukt){
	*ptrSum = x + y;
	*ptrProdukt = x * y;
} 