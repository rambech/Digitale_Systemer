#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Skal lese inn 12.03.2019
int main(void){
	char date[12];
	const char s[2] = ".";
	int day, month, year;
	char *mnd[12] = 
	{"januar", "februar", "mars", "april", "mai", "juni", "juli", "august", "september", "oktober", "november", "desember"};

	printf("Hva er datoen?\n");
	fgets(date, 12, stdin);

	char *newline = strchr(date, '\n');
	if(newline) *newline = 0;

	day = atoi(strtok(date, s));
	month = atoi(strtok(NULL, s));
	year = atoi(strtok(NULL, s));

	printf("Datoen er:\n");
	printf("%d. %s %d\n", day, mnd[month-1], year);
}