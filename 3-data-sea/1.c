//find int overflow, fp overflow, fp underflow
//2**31-1 = 2147483647
#include <stdio.h>
void ints(void);

int main(void){
	ints();
}

void ints(void){
/* remember 2's-complement,
		111 -1
		110 -2
		101 -3
		100 -4
		011  3
		010  2
		001  1
		000  0
*/
/*
	//signed integer
	int i = 0;
	while(i+1 > 0){
		i++;
	}
    printf("i will overflow if inc'd. i=%d i+1=%d\n", i, i+1);
	//	]=> will overflow if inc'd. i = 2147483648 i+1= -2147483647
	
	i = 0;
	while((i-1) < 0){
		i--;
	}
    printf("i will overflow if dec'd. i=%d i-1=%d\n", i, i-1);
	//	]=> will overflow if inc'd. i= i-1=

	

	//unsigned integer
	unsigned int u = 0;
	while (u+1) u++;
	printf("u: %u u if inc'd: %u\n", u, u+1);	
	//u: 4294967295 u if inc'd: 0
*/
	//float overflow

	float foo = 16777216.000000;	
	printf("%f %f\n", foo,foo+1);
	// foo is actually equal to foo+1.
	//it won't let you overflow, it just stays the same!!
/*	
	float f = 0;
	while (f+1 >= 0) {f++; printf("%f\n",f);}
	printf("f: %f inc(f): %f", f, f+1);
*/	
	
	//float underflow prints 0.000000 many times before ceasing
	while (foo/2 > 0) {printf("%f\n", foo); foo /= 2;}
	printf("foo %f:  foo/2.0 %f\n", foo, foo/2.0);
}




// clang actually prints a warning, gcc does not.
// think this is because the side effects from i++ (3rd arg to printg) are being evaluated before i (2nr arg)
// leaving it so i can remember what happens! 	



