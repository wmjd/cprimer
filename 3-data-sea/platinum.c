#include <stdio.h>

int main(void){
	float weight; float value;
	
	printf("Are you worth your weight in platinum?\n");
	printf("Let's find out!\n");
	printf("Please enter your weight: ");
	scanf("%f", &weight);
	value = weight; // * 1700.0 * 14.5833;
	printf("Your weight in platinum is worth %.2f.\n", value);
	return 0;
}
