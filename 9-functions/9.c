//recursive power function that handles negatives

#include <stdio.h>

double power(double n, int p){
	if(p == 0)
		return 1;
	else if(p > 0)
		return n*power(n,p-1);
	else if(p < 0)
		return power(n,p+1)/n;
}

int main(void){

	printf("%.1lf^%d = %lf\n", 2.0, -4, power(2.0,-4));
	printf("%.1lf^%d = %lf\n", 2.0, -3, power(2.0,-3));
	printf("%.1lf^%d = %lf\n", 2.0, -2, power(2.0,-2));
	printf("%.1lf^%d = %lf\n", 2.0, -1, power(2.0,-1));
	printf("%.1lf^%d = %lf\n", 2.0,  0, power(2.0, 0));
	printf("%.1lf^%d = %lf\n", 2.0,  1, power(2.0, 1));
	printf("%.1lf^%d = %lf\n", 2.0,  2, power(2.0, 2));
	printf("%.1lf^%d = %lf\n", 2.0,  3, power(2.0, 3));
	printf("%.1lf^%d = %lf\n", 2.0,  4, power(2.0, 4));

	return 0;
}
