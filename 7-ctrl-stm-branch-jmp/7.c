//input hours worked (in a week). outputs gross pay, taxes, net pay

#include <stdio.h>
#define BASIC 10.00 //basic hourly wage
#define OVER 15.00 //wage after 40 hours
#define RATE1 0.15 //tax of first $300
#define RATE2 0.20 //tax of next $150
#define RATE3 0.25 //tax of rest 

int main(void){
	
	float input;
	printf("Enter hours worked this week: ");
	scanf("%f", &input);

	float gross = (input > 40.0) ?
		BASIC*40.0 + OVER*(input - 40.0) : BASIC*input ;

	float taxes = 
		(gross > 300) ? 
			((gross > 450) ?
				(RATE1*300 + RATE2*150 + RATE3*(gross-450)) :
				(RATE1*300 + RATE2*(gross-300))) :
			(RATE1*gross) ;  

	printf("Gross pay: %f\nTaxes: %f\nNet pay: %f",
		gross, taxes, gross-taxes);

	return 0;

} 
