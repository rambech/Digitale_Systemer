#include <stdio.h>

int main(void){
	int x[10];
	long long y[10];
	float z[10];
	long double w[10];


	for(int i = 0; i < 10; i++){
	printf("x[%d] = %p\n", i, &x[i]);	
	printf("y[%d] = %p\n", i, &y[i]);
	printf("z[%d] = %p\n", i, &z[i]);
	printf("w[%d] = %p\n", i, &w[i]);
	}

}