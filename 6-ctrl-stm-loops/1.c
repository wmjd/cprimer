#include <stdio.h>
#define ANUM 26

int main(void){
	char alpha[ANUM];
	for(int n = 0; n < ANUM; n++){
		alpha[n] = 'a' + n;
	}
	for(int n = 0; n < ANUM; n++){
		putchar(alpha[n]);
	}
	
	


	return 0;
}
