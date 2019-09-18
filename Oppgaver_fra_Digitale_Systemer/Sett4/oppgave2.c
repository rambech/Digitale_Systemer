#include <stdio.h>

int main(void){
	float x[6] = {1, 2, 8, 3, 5, 2,}, x_min = 100;
	int i;
	for(i=0; i<6; i++){
		if (x[i] < x_min){
			x_min = x[i];
		}
	}
	printf("%.2f\n", x_min);
}