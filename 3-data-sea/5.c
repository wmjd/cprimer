#include <stdio.h>

int main (void) {
	float secPerYr = 3.126e7;
	float years;

	printf("Enter your age in years: ");
	scanf("%f", &years);
	printf("%f years => %f seconds", years, years*secPerYr);

}
