/*

*/

#include <stdio.h>
#define ARTICHOKE 5.05 //per pound...
#define BEET 1.15
#define CARROT 1.09

float applyDiscount(float);
float applyShipping(int);

int main(void){

	int a,b,c; //these are number of pounds
	float subtotal, afterDiscount, shipping, total;

	while(1){
		printf("Enter pounds of artichokes at $%.2f/lbs, " 
			"beets at $%.2f/lbs, and carrots at $%.2f/lbs. ", 
			ARTICHOKE, BEET, CARROT);
		if(scanf("%d%d%d", &a, &b, &c) != 3){
			printf("Bye.");
			break;
		}

		subtotal = a*ARTICHOKE + b*BEET	+ c*CARROT;
		afterDiscount = applyDiscount(subtotal);
		shipping = applyShipping(a+b+c);
		total = afterDiscount + shipping;

		printf("subtotal: $%.2f\n"
				"after discount: $%.2f\n"
				"shipping cost: $%.2f\n"
				"total: $%.2f\n",
					subtotal, afterDiscount, shipping, total);
	}
	
	return 0;
}

float applyDiscount(float subtotal){
	return subtotal >= 100.0 ? 0.95*subtotal : subtotal;
}

float applyShipping(int weight){
	return 
	weight > 5 ?
		(weight > 20 ?
			14.00 + 0.50*(weight-20) :
			14.00) :
		6.50 ;		
}
