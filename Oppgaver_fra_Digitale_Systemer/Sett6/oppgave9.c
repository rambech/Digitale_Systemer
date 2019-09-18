#include <stdio.h>

int finn0();

int main(void){
	int arr[] = 
	{3, 4, 5, 1, 6, 1};
	int lengde = sizeof(arr)/sizeof(arr[0]);

	int res = finn0(arr, lengde);
		
	if(res > 0){
		printf("Bingo, indeksen er: %d\n", res);
	} else {
		printf("Oida...\n");
	}
}

int finn0(int tall[], int lengde){
	int *ptrTall;
	int res;
	ptrTall = tall;
	
	for(int i = 0; i < lengde; i++){
		if(*(ptrTall+i) == 0){
			res = i;
			break;
		}
	}

	return res;
}