#include <stdio.h>
#include <math.h>

float hypoteneus(float a, float b);

int main(int argc, char const *argv[])
{
	float a, b;
	printf("a:\n");
	scanf("%f", &a);
	printf("b:\n");
	scanf("%f", &b);
	hypoteneus(a,b);
}

float hypoteneus (float a, float b){
	float c = sqrt(a*a + b*b);
	printf("%.2f\n", c);
	return 0;
}