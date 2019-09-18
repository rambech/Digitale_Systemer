#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAXCUNT 10

time_t t;
srand((unsigned)time(&t));

int main(void){
	double num[MAXCUNT];
	double sum=0;
	for (int i=0; i<10; i++){
		num[i] = (rand() % 10000)/100.0;
		sum=sum+num[i];
	}
	double g = sum/10;
	printf("Gjennomsnittet er %.2f\n", g);
}