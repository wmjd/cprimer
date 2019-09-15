#include <stdio.h>

void copy(double (*)[3], double (*)[3], int);
void copy1(double [], double [], int);

int main(void){

	double a[4][3] = {{0,1,2}, {3,4,5}, {6,7,8}, {9,10,11}};
	double b[4][3];

	copy(a,b, sizeof(a)/sizeof(double [3])); 

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("%lf ", a[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("%lf ", b[i][j]);
		}
		putchar('\n');
	}	
	return 0;
}

void copy(double (*src)[3], double (*dst)[3], int numOfOuterArray){
	for(int i = 0; i<(numOfOuterArray); i++){
		copy1(dst[i], src[i], 3);
	}	

}
void copy1(double dst[], double src[], int size){
	for(int i = 0; i < size; i++){
		dst[i] = src[i];
	}
}
