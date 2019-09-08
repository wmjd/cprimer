//devise fun min(x,y) for doubles. main is driver

#include <stdio.h>

double min(double, double);

int main(void){

	printf("m(1,2)=%lf. m(2,1)=%lf. m(9,12)=%lf m(11,11)=%lf.\n",
		min(1,2), min(2,1), min(9,12), min(11,11));

	return 0;
}

double min(double x, double y){
	return (x < y) ? x : y ;
}
