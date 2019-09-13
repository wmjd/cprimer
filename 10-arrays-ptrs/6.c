//just reverse an array of dbl

#include <stdio.h>

void rev(double *,double *);

int main(void){
	double a[] = {0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
	for(int i = 0; i < sizeof(a)/sizeof(double); i++)
		printf("%.2lf ", a[i]);
	rev(a, a + sizeof(a)/sizeof(double) - 1);
	putchar('\n');
	for(int i = 0; i < sizeof(a)/sizeof(double); i++)
		printf("%.2lf ", a[i]);

	return 0;
}

void rev(double *low, double *high){
	double temp;
	while(low < high){
		temp  = *high;
		*high-- = *low;
		*low++ = temp;

	}
}
