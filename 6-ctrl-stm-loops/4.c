/* output this pattern:
A
BC
DEF
GHIJ
KLMNO
PQRSTU */

#include <stdio.h>


int main(void){

	char current = 'A';
	
	for(int row = 1; 'Z' - current > row; row++){
		for(int n = 1; n <= row; n++){
			printf("%c", current++);
		}
		printf("\n");
	}

	return 0;
}
