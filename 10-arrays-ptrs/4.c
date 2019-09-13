//fun rets index of max val in double arr

#include <stdio.h>
#include <float.h>

int maxi(double*,int);

int main(void){

	double d[] = {0,1,2,3,4,11,5,6,7,8,9};
	printf("indx of max elt of d: %d.\n",
		maxi(d, sizeof(d)/sizeof(double)));	

	return 0;
}

int maxi(double *a, int size){
	double m = -DBL_MAX;
	int mi = 0;
	for(int i = 0; i < size; i++){
		if(*(a+i) > m){
			m = *(a+i);
			mi = i;
		}	
	}		
	
	return mi;
}
