//copy 3rd thru 5th elements of 7-elt array into 3-elt array/

#include <stdio.h>
#define DO(n) for(int i = 0; i < n; i++) 
#define NL putchar('\n');

void copy(int [], int [], int);

int main(void){

	int seven[7] = {'0','1','2','3','4','5','6'};
	int three[3];

	copy(three, seven+3, 3);

	DO(7)
		putchar(seven[i]);	
	NL	
	DO(3)
		putchar(three[i]);	

	return 0;
}
void copy(int dst[], int src[], int size){
	for(int i = 0; i < size; i++){
		dst[i] = src[i];
	}
}
