
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, a, b, c; 
	for (a=1; a<101; a++){
		for (b=1; b<101; b++){
			for (c=1; c<101; c++){
				if (a*a + b*b == c*c){
					printf("Trekant med katetene: %d og %d\n", a, b);
					printf("Og hypoteneus: %d\n", c);
				}
			}
		}
	}


	return 0;
}