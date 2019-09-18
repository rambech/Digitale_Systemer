#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, k;
	printf("\t i\t\t  i*i\t\t  i*i*i\n\n");
	for (i=1; i<11; i++){
		j = i*i;
		k = i*j;
		printf("%10d\t %10d\t %10d\t\n", i, j, k);
	}
	return 0;
}