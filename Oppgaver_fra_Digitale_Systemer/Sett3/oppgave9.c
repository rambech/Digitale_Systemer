#include <stdio.h>
#include <math.h>

void write_pi();

int main(void){
	int j=0;
	float div, val, ang;

	div = 3.1415/30;

	while(j<30){
		ang = j*div;
		val = 40*sin(ang);

		write_pi((int)val);
		j++;
	}

	write_pi();	
}

void write_pi(int n){
	int i=0;

	while(i<n){
		printf("*");
		i++;
	}
	printf("\n");
}	