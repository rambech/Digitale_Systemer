#include <stdio.h>


int main(void)
{
	int i, j, x, z, temp[7];
	for (i=0; i<7; i++){
		printf("%d. dag\n", i + 1);
		scanf("%d", &x);
		temp[i] = x;
	}
	printf("Temp:");
	for (i=0; i<7; i++){
		printf(" %d,", temp[i]);
	}
	printf("\n");

}