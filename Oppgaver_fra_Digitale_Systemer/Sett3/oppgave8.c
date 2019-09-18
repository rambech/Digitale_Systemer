#include <stdio.h>

int skriv_stjerner(int n);


int main(){
	int n;
	printf("Whatcha want?\n");
	scanf("%d", &n);
	skriv_stjerner(n);
}

int skriv_stjerner(int n){
	int i, j;
	for (i=0; i<n+1; i++){
		for(j=0; j<i; j++){
			printf("*");
		}
		printf("\n ");
	}
	return 0;
}