#include <stdio.h>



int main(void){
	int x[5];
	int *y;
	y = x;
	//int *y = &x;
	for(int i=0; i<5; i++){
		printf("Plass nr. %d:", i);
		scanf("%d", y+i);
	}

	printf("\nArraynotasjon:\n");
	for(int i = 0; i < 5; i++){
		printf("Plass x[%d] = %d\n", i, x[i]);
	}

	printf("\nPekernotasjon:\n");
	for(int i =0 ; i < 5; i++){
		printf("Plass x[%d] = %d\n", i, *(y+i));
	}

}