#include <stdio.h>
#define cube(x) x*x*x

int main(void){
	double input;
	printf("Enter a number to cube: ");
	scanf("%lf", &input);
	printf("%lf^3 = %lf", input, cube(input));

	return 0;
}
