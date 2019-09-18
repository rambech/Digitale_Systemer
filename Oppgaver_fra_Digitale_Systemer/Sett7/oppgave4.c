#include <stdio.h>
#include <string.h>



int main(void){
	char str[20];
	fgets(str, 20, stdin);

	int lengde = strlen(str);
	for(int i = lengde; i >= 0; i--){
		printf("%c", str[i]);
	}

	printf("\nOi, det ble rart!\n");
	// for(int = 0; i < 20; i++){
		// printf("%s\n", );
	// }
	// printf("%s\n", revStr);
}