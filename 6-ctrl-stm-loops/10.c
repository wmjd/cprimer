// get pair of ints. sum squares from lower to upper and print. loop until upper limit >= lower limit

#include <stdio.h>

int sumsquares(int, int);

int main(void){

	int min, max;
	do{
		printf("Enter min followed by max: ");
		scanf("%d%d", &min, &max);
		printf("Sum of squares from %d to %d is %d\n", 
			min, max, sumsquares(min,max));	
	} while (max > min);

	return 0;
}

int sumsquares(int min, int max){
	int acc = 0;
	while(min <= max){
		acc += min*min;
		min++;
	}
	return acc; 
}
