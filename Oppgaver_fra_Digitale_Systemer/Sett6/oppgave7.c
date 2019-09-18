#include <stdio.h>

void minogmax();

int main(void){
	int max, min, arr[] = 
	{4, 5, 2, 7, 42, 1};
	int lengde = sizeof(arr)/sizeof(arr[0]);
	minogmax(arr, lengde, &max, &min);
	printf("Max: %d og Min: %d\n", max, min);
}


void minogmax(int tall[], int lengde, int *ptrMax, int *ptrMin){
	int hold;
	for (int i = 0; i < lengde; i++)
	{
		for (int j = 0; j < lengde-1; j++)
		{
			if (tall[j]>tall[j+1])
			{
				hold = tall[j];
				tall[j] = tall[j+1];
				tall[j+1] = hold;
			}
		}
	}
	*ptrMax = tall[lengde-1];
	*ptrMin = tall[0];
}