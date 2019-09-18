#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j; 
	int n = 2;
	//n skal bli største felles multiplum
	printf("Tall en:\n");
	scanf("%d", &i);
	printf("Tall to:\n");
	scanf("%d", &j);
	int con1 = i % n;
	int con2 = j % n;
	//for å finne sfm må % til j og i være 0
	while (con1 != 0 && con2 != 0){
		n++;
	}
	n = (float)n;
	printf("%.2f\n", (float)n);
	return 0;
}