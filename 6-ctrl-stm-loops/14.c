//2 arrays. user enters 1st. 2nd's offest o is sums of offsets 0-to-o in first arr

#include <stdio.h>
#define SIZE 8

int main(void){

	int a[SIZE], b[SIZE];
	printf("Enter 8 ints into array: ");
	for(int i=0; i<SIZE; i++){
		scanf("%d", a+i); //fill a[i]
	
		int acc = 0; // fill b[i] with accumulated values from a[j=0]-to-a[j=i]
		for(int j=0; j<=i; j++){
			acc += a[j];
		}
		b[i] = acc;
	}

	//printing
	for(int i=0; i<SIZE; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	for(int i=0; i<SIZE; i++){
		printf("%d ", b[i]);
	}

	return 0;
}
