//Printing av stjerner
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n;

	for (n=1; n<6; n++){
		for (i=0; i<n; i++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}