#include <stdio.h>

void sirkel(float radius, float *omkrets, float *areal);

int main(void){
	float rad_bruh = 5.0;
	float sur, area;

	sirkel(rad_bruh, &sur, &area);
	printf("Radiusen er %.0f, omretsen er %.0f og arealet er %.0f\n", rad_bruh, sur, area);

}

void sirkel(float radius, float *omkrets, float *areal){
	float e = 3.0;
	float pi = e;

	*omkrets = pi * 2 * radius;
	*areal = pi * radius * radius;
}