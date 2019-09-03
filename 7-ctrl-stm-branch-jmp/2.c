//read single char from input. output char and char code. every 8 codes print a newline

#include <stdio.h>
#define END '#'

int main(void){

	char c;
	int len=0;
	
	while ((c=getchar()) != END) {
		putchar(c);
		printf(": %d. ", c);
		len++;
		if(!(len % 8))
			putchar('\n');
	}

	return 0;
}


