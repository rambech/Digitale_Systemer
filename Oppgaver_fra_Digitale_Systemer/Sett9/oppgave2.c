#include <stdio.h>

struct klokkeslett{
	int time;
	int minutt;
	int sekund;
};


int main(void){
	struct klokkeslett start;
	struct klokkeslett slutt;

	int t, m, s;

	printf("Start(tms): ");
	scanf("%d%d%d", &start.time, &start.minutt, &start.sekund);

	printf("Slutt(tms): ");
	scanf("%d%d%d", &slutt.time, &slutt.minutt, &slutt.sekund);


	t = slutt.time - start.time;
	m = slutt.minutt - start.minutt;
	s = slutt.sekund - start.sekund;

	printf("\nTiden er:\n");
	printf("%d time(r), %d minutt(er) og %d sekund(er)\n", t, m, s);
 
}