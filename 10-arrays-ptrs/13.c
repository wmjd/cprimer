/* user inputs 3 sets of five doubles.
 * store in 3x5 array
 * compute avg
 * find max of all 15
 * print results
*/

#include <stdio.h>

double average(double (*a)[5], int numRows);
double maximum(double (*a)[5], int numRows);
void inputRoutine(double (*a)[5], int numRows);
void printRoutine(double (*a)[5], int numRows);

int main(void){
	
	double a[3][5];
	double avg, max;
	inputRoutine(a,3);
	printRoutine(a,3);
	avg = average(a,3);
	max = maximum(a,3);
	
	printf("average: %lf\nmax: %lf\n", avg, max);

	return 0;
}


double average(double (*a)[5], int numRows){
		
	double total = 0;	

	for(int i=0; i < numRows; i++){
		for(int j=0; j < 5; j++){
			total += a[i][j];
		}
	}

	return total / (numRows*5) ;
}

double maximum(double (*a)[5], int numRows){

	double max = **a;
	double cur;

	for(int i=0; i < numRows; i++){
		for(int j=0; j < 5; j++){
			cur =  a[i][j];
			if(max < cur)
				max = cur;
		}
	}

	return max;	
}

void inputRoutine(double (*a)[5], int numRows){
	
	printf("Enter 3 sets of 5 doubles:\n");

	for(int i=0; i < numRows; i++){
		for(int j=0; j < 5; j++){
			printf("%d %d  ", i, j);
			scanf("%lf", *(a+i) + j);
		}
		putchar('\n');
	}

	printf("Exiting inputRoutine\n");

}

void printRoutine(double (*a)[5], int numRows){
	for(int i=0; i < numRows; i++){
		for(int j=0; j < 5; j++){
			printf("%lf ",a[i][j]);
		}
		putchar('\n');
	}
}
