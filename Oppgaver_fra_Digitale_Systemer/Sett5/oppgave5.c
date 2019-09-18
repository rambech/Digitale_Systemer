#include <stdio.h>
#include <math.h>

float median();

int main(void){
	float arr[] = 
	{5, 8, 11, 2, 1, 5};
	int lengde = sizeof(arr)/sizeof(arr[0]);

	printf("Original:\n");
	for (int i = 0; i < lengde; i++){
		printf("%.1f\n", arr[i]);
	};
	// Test lengden 
	printf("\nHer er lendgen: ");
	printf("%d\n", lengde);

	median(arr, lengde);
	printf("\nMedianen er: ");
	printf("%.2f\n", median);
}

float median(float x[], int lengde){
	double median, gjennomsnitt, hold;
	// Bobblesortering i stigende rekkefølge
	for (int i = 0; i < lengde; i++){
		for (int j = 0; j < lengde-1; j++){
			if (x[j]>x[j+1]){
				hold = x[j];
				x[j] = x[j+1];
				x[j+1] = hold;
			}
		}
	}
	// Hvis lengde == partall
	if (lengde % 2 == 0){
		int plass1 = lengde / 2, plass2 = (lengde / 2) + 1;
		float val1 = x[plass1], val2 = x[plass2];

		gjennomsnitt = (val1 + val2)/2;
		median = gjennomsnitt;
	} 
	// Hvis lendge == oddetall
	else {
		// plassen er definert som halve lengden,
		// rundet opp til første heltall
		int plass = ceil((double)lengde/2);
		median = x[plass];
	}
	return median;
}




