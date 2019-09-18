#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i, j, n=10, res;
	int temp[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	//Bubble Sort algoritme
	for (i=0; i<n-1; i++){
		for (j=0; j<n-i-1; j++){
			if(temp[j] > temp[j+1]){
				res = temp[j];
				temp[j] = temp[j+1];
				temp[j+1] = res;
			}
		}
	}
	//Print verdiene i rekkefølge
	for (i=0; i<n; i++){
		printf("%d\n", temp[i]);
	}
	return 0;
}