//fun rets diff in value of max and min elts of input array

#include <stdio.h>
#include <float.h>

double diff(double *, int size);

int main(void){
	double a[] = {1.0,2.0,101.0,11.0};
	printf("Diff of a = %lf.\n",
		diff(a, sizeof(a)/sizeof(double)));
	double b[] = {1.0};
	printf("Diff of b = %lf.\n",
		diff(b, sizeof(b)/sizeof(double)));
	double c[] = {};
	printf("Diff of c = %lf.\n",
		diff(c, sizeof(c)/sizeof(double)));

	return 0;
}

double diff(double *a, int size){
	double max = -DBL_MAX;
	double min =  DBL_MAX;
	double cur;

	for(int i = 0; i < size; i++){
		cur = *(a+i);
		if(cur < min)
			min = cur;
		if(cur > max)
			max = cur; 
	}

	return max - min;
}

