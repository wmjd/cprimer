//enter 2 floats. prints diff/prod. loops until nonnumeric input

#include <stdio.h>

int main(void){

	printf("Enter two floats: ");
	float a, b;
	
	while(scanf("%f%f", &a, &b) == 2){
		printf("Diff(a,b)/Prod(a,b) = %f\n",
			(((a>b) ? a : b) - ((a>b) ? b : a)) / (a*b) ); 
	}

	return 0;
}
