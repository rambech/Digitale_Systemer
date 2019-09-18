#include <stdio.h>
//**********Denne*Finner*Primtall***********
//I denne lærte jeg meg å returngere verdier fra én funksjon!
//Pretty cool, aye?

int prime();

int main(void){
	for(int j=0; j<100; j++){
		int p = prime(j);
		printf("Prime: %d\n", p);
	}

}

int prime (int x){
	if (x%2 != 0 && x%3 != 0 && x%5 != 0){
		x *= 1;
	} else if (x == 2){ //Tall 2, 3 og 5 må forces inn, dessverre.
		x *= 1;
	} else if (x == 3){
		x *= 1;
	} else if (x == 5){
		x *=1;
	} else {
		x = 0;
	}
	return x;
}