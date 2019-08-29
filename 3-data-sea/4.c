//read float and print it in decimal, exponential

#include <stdio.h>

int main(void){
	float storeUserFloat;
	scanf("%f", &storeUserFloat);
	printf("fixed-pt notation: %f\n exponential notation: %e\np-notation: %f\n" ,
			storeUserFloat, storeUserFloat, storeUserFloat);

	return 0;
}
