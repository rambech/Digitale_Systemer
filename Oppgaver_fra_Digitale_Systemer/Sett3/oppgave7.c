#include <stdio.h>
int a, b, c, val;
int minst ();

int main(){
	
	printf("a:\n");
	scanf("%d", &a);
	printf("b:\n");
	scanf("%d", &b);
	printf("c:\n");
	scanf("%d", &c);
	minst(val);
	printf("%d er størst\n", val);
	return 0;
}

int minst(){
	if (a > b && a > c){
		val = a;
	} else if(b > a && b > c){
		val = b;
	} else if(c > a && c > b){
		val = c;
	} else {
		val = a + b + c;
	}
	return val;
}