//Her er gangetabellen! 
#include <stdio.h>

int main(int argc, char const *argv[])
{
	//ma(chi)n
	//(chi)namatikk
	//thai(chi)
	//jew(chi)tsu

	int i, j, n;
	printf("     *\t");
	for(i=1; i<11; i++){
		printf("%d\t", i);
	}
	//printf("    *\t 1  \t2\t  3\t  4\t  5\t  6\t  7\t  8\t  9\t  10 \n");
	printf("\n************************************************************************************\n");
	for (i=1; i<11; i++){
		//printf("  %2d *\t%d\n", i, j);
		printf(" %3d *  ", i);
		for (n=1; n<11; n++){
			j = i*n;
			printf("%3d\t", j);
		}
		printf("\n");
	}

	return 0;
}