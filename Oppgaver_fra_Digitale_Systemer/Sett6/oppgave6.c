#include <stdio.h>

void bytte();

int main(void){
	int a, b, c;

	printf("x:");
	scanf("%d", &a);
	printf("y:");
	scanf("%d", &b);
	printf("z:");
	scanf("%d", &c);

	bytte(&a, &b, &c);
	printf("%d < %d < %d\n", a, b, c);
}


void bytte(int *ptrX, int *ptrY, int *ptrZ){
	int hold;
	if(*ptrX > *ptrY){
		hold = *ptrX;
		*ptrX = *ptrY;
		*ptrY = hold;
	} 
	if(*ptrY > *ptrZ){
		hold = *ptrY;
		*ptrY = *ptrZ;
		*ptrZ = hold;
	}
	if(*ptrX > *ptrY){
		hold = *ptrX;
		*ptrX = *ptrY;
		*ptrY = hold;
	} 
}