#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int val, k;
int terning(void);

int main(void){
	int i;
	srand(time(NULL));
	for (i=0; i<3000; i++){
		terning();
		if (val == 6){
			k++;
		}
		printf("%d\n", val);
	}
	printf("Antall 6ere: %d\n", k);
}

int terning(void){
	val = rand() % 6 + 1;
	return val;
}