/* Print table with int, square, cube. User selects lower, upper table limit */

#include <stdio.h>

int main(void){

	int min, max;
	printf("Enter min and max with a whitespace seperation: ");
	if(scanf("%d%d", &min, &max) != 2){
		printf("Unexpected input. Bye-bye.\n");
		return 0;
	}
	printf(" n    sq(n)    cb(n)\n");
	for(int n = min; n <=max; n++){
		printf("%2d %8d %8d\n", n, n*n, n*n*n);
	}		

	return 0;
}
