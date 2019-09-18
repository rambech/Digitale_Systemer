#include <stdio.h>

void sort();

int main(void){
	float x[] = 
	{3, 5, 8, 1, 4};
	int lengde = sizeof(x)/sizeof(x[0]);

	printf("Original:\n");
	for (int i = 0; i < lengde; i++){
		printf("%.2f\n", x[i]);
	}
	sort(x, 5);
	printf("New and better\n");
	for (int i = 0; i < 5; i++){
		printf("%.2f\n", x[i]);
	}

}

void sort(float x[], int lengde){
	int hold;
	// Bobblesortering i synkende rekkefølge
	for (int i = 0; i < lengde; i++){
		for (int j = 0; j < lengde; j++){
			if (x[j]<x[j+1]){
				hold = x[j];
				x[j] = x[j+1];
				x[j+1] = hold;
			}
		}
	}
}