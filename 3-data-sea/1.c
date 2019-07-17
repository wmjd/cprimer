//find int overflow, fp overflow, fp underflow
//2**31-1 = 2147483647
#include <stdio.h>
void ints(void);

int main(void){
	ints();
}

void ints(void){
	int i = 0;
	while(i+1>0){
		i++;
	}
    printf("i will overflow if inc'd. i=%d i+1=%d\n", i, i+1);
	//	]=> will overflow if inc'd. i=-2147483648 i+1=2147483647
	
	i = 1;
	while(i+1){
		i++;
	}
    printf("i will overflow if inc'd. i=%d i+1=%d\n", i, i+1);
	//	]=> will overflow if inc'd. i=-1 i+1=0

	i = 0;
	while(i+1){
		i++;
	}
    printf("i will overflow if inc'd. i=%d i+1=%d\n", i, i++);
	// 
	// think this is because the side effects from i++ (3rd arg to printg) are being evaluated before i (2nr arg)
	// leaving it so i can remember what happens! 	
}



