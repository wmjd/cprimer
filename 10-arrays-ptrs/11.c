//2 functions on 3x5 array. double and print.

#include <stdio.h>

void print(int (*a)[5], int numRows){

	for(int i=0; i < numRows; i++){
		for(int j=0; j < 5; j++){
			printf("%d", a[i][j]);
		}
		putchar(' ');
	}
	putchar('\n');

}

void dooble(int (*a)[5], int numRows){

	for(int i=0; i < numRows; i++){
		for(int j=0; j < 5; j++){
			a[i][j] += a[i][j];
		}
	}

}

int main(void){

	int data[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	
	print(data, 3);
	dooble(data, 3);
	print(data, 3);

	return 0;
}
