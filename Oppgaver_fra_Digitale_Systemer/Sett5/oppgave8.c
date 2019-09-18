#include <stdio.h>


int main(void){
	int arr[] =
	{1, 3, 2, 3, 2, 5, 1, 4, 4};
	int lengde = sizeof(arr)/sizeof(arr[0]),
	res = 0;

	for (int i = 0; i < lengde; i++){
		res = res^arr[i];
	}
	printf("%x\n", res);
	return 0;
}