#include <stdio.h>

int main(void){
	unsigned int x=3 , y=5;
	int z;
	z = x & y; // AND
	printf("%d\n", z);
	z = x | y; // OR
	printf("%d\n", z);
	z = x ^ y; // XOR
	printf("%d\n", z);
}