#include <stdio.h>

int main(void){
	/*int bb = 10;

	int *ptrBb = &bb;

	printf("Adress \t\t Name \t Value\n");
	printf("%p \t %s \t %d \n", &bb, "bb", bb);
	printf("%p \t %s \t %p\n",&ptrBb, "ptrBb", ptrBb);

	*ptrBb = 71;

	printf("%p \t %s \t %d\n",&bb, "bb", bb);


	int balleMos[5] = {1, 4, 6, 1, 8};

	printf("Element \t Adress \t\t Value\n");
	for (int i = 0; i < 5; i++){
		printf("balleMos[%d] \t %p \t %d\n", i, &balleMos[i], balleMos[i]);
	}*/

	int tall[] =
	{3, 4, 6, 1, 3};
	int lengde = sizeof(tall)/sizeof(tall[0]);
	int *ptrTall;
	ptrTall = tall;

	//printf("Adress \t\t Name \t Value\n");
	printf("*ptrTall: %d, ptrTall: %p, tall: %d\n", *ptrTall, ptrTall, tall[0]);
	printf("\nog dette da? %d\n", *(ptrTall+2));
}
























