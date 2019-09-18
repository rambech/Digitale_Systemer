#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int val;
int terning(void);


int main()
{
	int antall[30], sum;
	srand(time(NULL));
	for (int j = 1; j < 30; j++){
		sum = 0;		
		for(int i = 0; i < 4; i++){
			terning();
			sum = sum + val;
		}
		antall[j] = sum;
		printf("%d\n", sum);
	}
		return 0;
}


int terning(void){
	val = rand() % 6 + 1;
	return val;
}