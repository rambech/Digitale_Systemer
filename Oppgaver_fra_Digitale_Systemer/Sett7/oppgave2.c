#include <stdio.h>
#include <string.h>



int main(void){
	char str1[80];
	char str2[80];
	int comp;

	printf("1:");
	fgets(str1, 80, stdin);

	printf("2:");
	fgets(str2, 80, stdin);

	if(strlen(str1)<strlen(str2)){
		printf("\n%s er lengst\n", str2);
	} 
	else if(strlen(str1)>strlen(str2)){
		printf("\n%s er lengst\n", str1);
	} else {
		printf("\nDe er like lange\n");
	}

	comp = strcmp(str1, str2);
	if(comp < 0){
		printf("\nStr1 kommer først.\n");
	}
	else if(comp > 0){
		printf("\nStr2 kommer først.\n");
	} else {
		printf("\nSamtidig!\n");
	}
}