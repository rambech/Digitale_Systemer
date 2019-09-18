//Fakultet av alle heltall fra 1 til 50!
//Programmet sliter etter 20...
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, n;
	unsigned long int sum[50];

	for (j=0; j<51; j++){
		sum[j]=1;
	}

	for (n=1; n<51; n++)
	{
		for (i=1; i<(n+1); i++){
			sum[n] = sum[n]*i;
			//printf("%ld\n", sum[n]);
		}
		printf("!%d er %lu\n", n, sum[n]);
	}

	return 0;
}