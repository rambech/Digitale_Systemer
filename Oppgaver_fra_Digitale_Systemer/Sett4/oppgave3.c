#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int i, arby[10], count=0;
	time_t t;

	srand((unsigned) time(&t));

	for(i=0; i<10; i++){
		arby[i] = rand() % 20 + 1;
	}
	for (i=0; i<10; i++){
		if(arby[i] == 5){
			count++;
		}
	}
	for (i=0; i<10; i++){
		printf("%d\n", arby[i]);
	}
	printf("Det er %d 5er(e)\n", count);
	return 0;
}
