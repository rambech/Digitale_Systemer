//******This*Program*Findes*Perfect*Numbers*******
#include <stdio.h>

int perfect();

int main(void){
	int i;
	for(i=1; i<10000 + 1; i++){
		if(perfect(i)) printf("%d\n", i);
	}
	printf("\n");
	return 0;
}	

int perfect(int x){
	int i, z = 0, b;
	for(i=1; i<x; i++){
		if (x%i == 0){
			z = z+i;
		}
	}
	if (z == x){
		return 1;
	} else {
		return 0;
	}

	
}
