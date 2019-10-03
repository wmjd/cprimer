//5.rand.c
#include "5.rand.h"

void fill(int * a, int size){
	for(int i=0; i<size; i++){
		a[i] = rand() % 10 +1;
	} 
}

void sort(int * a, int size){
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-i-1; j++){
			if(a[j] < a[j+1])
				swap(a+j, a+j+1);
		}
	}
}

unsigned int rand(void){
	static unsigned long int next = 1; //seed
	next = next*1103515245 + 12345;
	return (unsigned int) (next/65536) % 32768;
}

void swap(int *x, int *y){
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
