//chuckie: time * rate * expenses -> value
#include <stdio.h>
#define MILLION 10000000 
#define EXPENSE  1000000
#define RATE 0.08

float chuckie(int t, float r, int exp, int p){
	if(t == 0)
		return p;
	else
		return (1.0+r)*chuckie(t-1, r, exp, p) - exp;
}

int main(void){
	float chuckies_wealth = MILLION;
	int t = 1;
	while((chuckies_wealth = chuckie(t++, RATE, EXPENSE, MILLION)) > 0)
		; //empty loop body

	printf("After %d years, Chuckie has $%f.\n", t, chuckies_wealth);
	

	
}
