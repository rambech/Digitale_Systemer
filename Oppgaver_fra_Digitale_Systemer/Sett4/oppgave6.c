#include <stdio.h>


int arraysum(int mittarray[], int lengde);


int main(){
	int totsum, mittarray[] = 
	{3, 4, 1, 8, 9};
	//scanf("%d", &lengde);
	totsum=arraysum(mittarray, 5);
	printf("Summen av arrayet: %d\n", totsum);

	return 0;
}

int arraysum(int mittarray[], int lengde){
	int sum = 0;
	for (int i = 0; i < lengde; i++){
		sum = sum + mittarray[i];
	}
	return sum;
}