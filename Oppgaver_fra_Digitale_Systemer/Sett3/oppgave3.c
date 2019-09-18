#include <stdio.h>

int x, y;
void min();

int main(int argc, char const *argv[])
{
	printf("x:\n");
	scanf("%d", &x);
	printf("y:\n");
	scanf("%d", &y);
	min();
	return 0;
}

void min(){
	if (x > y){
		printf("x: %d\n", x);
	} else {
		printf("y: %d\n", y);
	}
}