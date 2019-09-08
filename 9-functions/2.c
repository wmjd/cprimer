//print char in cols i through j. so 0-i cols are ' '?

#include <stdio.h>
#define NL putchar('\n');

void chline(int, int, int);

int main(void){
	
	chline('*', 3, 5);
	NL
	chline('{', 0, 10);
	NL
	chline('#', 5, 5);
	NL

	return 0;
}

void chline(int ch, int i, int j){

	for(int k = 0; k < i; k++){
		putchar(' ');		
	}
	for(int k = i; k <= j; k++){
		putchar(ch);
	}
}


