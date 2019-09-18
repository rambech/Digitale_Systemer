#include <stdio.h>

int main(int argc, char const *argv[])
{
	char vokal;


	printf("Les inn: ");
	vokal = getchar();

	switch (vokal){
		case 'a' : printf("a\n");
		break;
		case 'e' : printf("e\n");
		break;
		case 'i' : printf("%c\n", vokal);
		break;
		case 'o' : printf("%c\n", vokal);
		break;
		case 'u' : printf("%c\n", vokal);
		break;
		case 'y' : printf("%c\n", vokal);
		break;
		default : printf("Konsonant! Kanskje æ ø eller å men æ gidd itj\n");
		break;
	}

	return 0;
}