#include <stdio.h>




int main(void){
	int x = 2;
	int y = 5;
	int *ptrZ = &x;
	int *ptrW = &y;


	printf("Adress \t\t Name \t Value\n");
	printf("%p \t %s \t %d\n", &x, "x", x);
	printf("%p \t %s \t %d\n", &y, "y", y);
	printf("%p \t %s \t %p\n", &ptrZ, "z", ptrZ);
	printf("%p \t %s \t %p\n", &ptrW, "w", ptrW);
}