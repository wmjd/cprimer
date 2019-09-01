//use macros first way
#include <stdio.h>

#define C(F) (5.0/9.0)*(F-32)
#define K(C) C+273.16

int main(void){
	float F;
	while(1){
		printf("Enter a temp in F: ");
		if(!scanf("%f", &F)) break; //scanf return items read, 0 if !%f.
		printf("%.2fF = %.2fC = %.2fK\n", F, C(F), K(C(F)));	
	}
	printf("Bye.\n");
return 0;
}

