//6.run.c
#include "6.run.h"


void run(int n){
	int * occurences = (int *) calloc(11, sizeof(int));
	for(int i=0; i<n; i++){
		(*(occurences + _rand()%10 +1))++;
	}
	for(int i=1; i<11; i++){
		printf("%d ", *(occurences+i));
	}
	putchar('\n');	
}

unsigned int _rand(void){
	static unsigned long int next = 1; //seed
	next = next*1103515245 + 12345;
	return (unsigned int) (next/65536) % 32768;
}


