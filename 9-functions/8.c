//write power function that raises double to int and handles negs
#include <stdio.h>

double power(double n, int p){
	double pow = 1;
	if(p >= 0)
		for(int i = 1; i <= p; i++)
			pow *= n;
	else
		for(int i = -1; i >= p; i--)
			pow /= n;

	return pow;
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
