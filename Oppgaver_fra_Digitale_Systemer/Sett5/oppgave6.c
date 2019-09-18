#include <stdio.h>


int main(void){
	float C, F;
	printf("    Celsius        Farenheit\n");
	for (int i = -100; i < 101 ;i += 10){
		C = (float)i;
		F = ((C*(1.8))+32); 
		printf("%10.1f     %10.1f\n", C, F);
	}


	return 0;
}