#include <stdio.h>

int main(void){
	int x = 1;
	for (int i = 0; i <= 10; i++){
		printf("%010d\n", x);
		x = x * 10;
	}
}