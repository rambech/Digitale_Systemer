#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	int kar[5];
	int sum;
	for (i=0; i<5; i++){
		printf("Prøve %d:\n", i+1);
		scanf("%d", &kar[i]);
	}
	for (i=0; i<5; i++){
		sum = sum+kar[i];
	}
	float g = (float)sum/5;
	if (g <= 39){
		printf("%.1f%% gir F!\n", g);
	} else if (g >= 40 || g <= 49){
		printf("%.1f%% gir E\n", g);
	} else if (g >= 50 || g <= 59){
		printf("%.1f%% gir D\n", g);
	} else if (g >= 60 || g <= 79){
		printf("%.1f%% gir C\n", g);
	} else if (g >= 80 || g <= 89){
		printf("%.1f%% gir B\n", g);
	} else if (g >= 90 || g <= 100){
		printf("%.1f%% gir A!\n", g);
	} else {
		printf("Juks!\n");
	}

	return 0;
}