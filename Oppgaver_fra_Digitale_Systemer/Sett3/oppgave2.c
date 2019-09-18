#include <stdio.h>

void xe();

double nok;
double eu;

int main(int argc, char const *argv[])
{
	xe();
	printf("Qvanta dinero?\n");
	scanf("%lf", &nok);
	xe();
	printf("%2.2lf\n", eu);
	return 0;
}

void xe(){
	//1 euro er 9.69 kroner	
	eu = nok/9.69;
}