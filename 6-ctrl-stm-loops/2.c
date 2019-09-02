#include <stdio.h>
#define ITER 5

int main(void){
	
	for(int n=0; n<ITER; n++){
		for(int m=n; m>=0; m--){
			printf("$");
		}
		printf("\n");
	}

	return 0;
}
