#include <stdio.h>

void byttom();

int main(void){
	int a = 3;
	int b = 5;

	byttom(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}

void byttom(int *x, int *y){
	int hold;
	hold = *x;
	*x = *y;
	*y = hold;
}