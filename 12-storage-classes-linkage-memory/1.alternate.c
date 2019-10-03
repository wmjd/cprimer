/* Rewrite listing 12.4 without globals
 * How will critic know about units?
 * Instead of keeping units in critic and having critic return val,
 * keep units in main and pass addr into critic. 
 * First way: int critic(void)
 * Secnd way: void critic(int *)
*/


#include <stdio.h>

void critic(int *);
int main(void){
	int units;
	printf("How many pounds to a firkin of butter?\n");
	while(units != 56)
		critic(&units);
	printf("You must have looked it up!\n");
	return 0;
}

void critic(int * units){
	scanf("%d", units);
}
