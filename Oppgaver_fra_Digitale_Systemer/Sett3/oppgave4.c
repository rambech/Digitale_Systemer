#include <stdio.h>
//finn ut hvordan hilde gjør det med funksjoner

 
float CtilF(float celsius);

int main(void){
	float celsius;
	printf("C:\n");
	scanf("%f", &celsius);
	CtilF(celsius);
}

float CtilF(float celsius){
	float fahr = (9*celsius/5)+32;
	printf("%2.1f\n", fahr);
	return 0;
}