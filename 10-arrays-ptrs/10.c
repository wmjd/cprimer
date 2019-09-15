//sums 2 arrays pairwise into third array

#include <stdio.h>
#define DO(times) for(int D = 0; D < times; D++)
  
void sum(int a[], int b[], int c[], int len){

	while(--len >= 0)
		c[len] = a[len] + b[len];
		
}

int main(void){

	int a[] = {1,2,3,4};
	int b[] = {4,3,2,-4};
	int c[4];

	sum(a,b,c,4);

	DO(4)
		printf("%d", c[D]);

	return 0;
}
