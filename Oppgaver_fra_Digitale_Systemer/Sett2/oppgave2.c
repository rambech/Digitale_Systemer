#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, N;

	while (N < 5000){
		n++;
		N = n*n;
	}
	printf("%d\n", N);
	return 0;
}