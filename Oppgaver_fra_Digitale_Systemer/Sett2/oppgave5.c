//Program for å finne fakultet til et heltall!
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int i;
	int n;
	int sum=1;
	printf("Hva vil du finne fakultet av? ");
	scanf("%d", &n);
	printf("Fakultet av: %d?\n", n);

	for (i=1; i<(n+1); i++){
		sum = sum*i;
		printf("%d\n", sum);
	}
	printf("!%d er %d\n", n, sum);

	return 0;
}