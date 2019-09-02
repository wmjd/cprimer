//calculate time * interest rate * principal -> value
//Daphne $100 at 10% simple.
//Deirdre $100 at 5% compound.
//How long for Deirdre to have more? Print values then.
#include <stdio.h>

float compound(int t, float r, float p){
	if(t==0)
		return p;
	else
		return (1.0+r)*compound(t-1, r, p);
}

float simple(int t, float r, float p){
	return t*(1.0+r)*p;
}

int main(void){

	float daphne, deirdre;
	int t=1;
	do{
		daphne = simple(t, 0.10, 100);
		deirdre = compound(t, 0.05, 100);
//		printf("Time: %d\tDaphne: %f\tDeirdre: %f\n", t, daphne, deirdre);
		t++;
	} while (daphne >= deirdre);
 
	printf("Year: %d\tDaphne: %f\tDeirdre: %f\n", t, daphne, deirdre);

	return 0;
}
