/* Rewrite listing 12.4 without globals
 * How will critic know about units?
 * Keep units inside critic: critic can just return the value to main
*/


#include <stdio.h>

int critic(void);
int main(void){
	printf("How many pounds to a firkin of butter?\n");
	while(critic() != 56)
		;
	printf("You must have looked it up!\n");
	return 0;
}

int critic(void){
	int units;
	scanf("%d", &units);
	return units;
}
