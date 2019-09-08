// takes 3 args: char, ints x,y. print char x times on y lines. 

#include <stdio.h>
#define NL putchar('\n');

void chblk(int, int, int);

int main(void){
	
	chblk('*', 3, 5);
	NL
	chblk('{', 1, 10);
	NL
	chblk('#', 5, 5);
	NL

	return 0;
}

void chblk(int ch, int x, int y){

	for(int n = 0; n < y; n++){
		for(int m = 0; m < x; m++){
			putchar(ch);
		}
		NL	
	}
}

