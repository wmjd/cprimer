//fun rets max val in double arr

#include <stdio.h>
#include <float.h>

double max(double*,double*);

int main(void){

	double d[] = {0,1,2,3,4,11,5,6,7,8,9};
	printf("max elt of d: %lf.\n",
		max(d, d + sizeof(d)/sizeof(double)));	

	return 0;
}

double max(double *a, double *stop){
	double working_max = -DBL_MAX;
	while(a<stop){
		if(*a > working_max)
			working_max = *a;
		++a;
	}
	return working_max;
}
