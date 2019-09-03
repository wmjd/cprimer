//Read input stream until '#'. Replace '.' with '!'. Replace original '!' with '!''!'. Reports number of subs made.

#include <stdio.h>
#define END '#'

int main(void){

	char c;
	int subs = 0;
	
	while((c=getchar()) != END) {
	
		if(c == '.'){
			putchar('!');
			subs++;
		}
		else if(c == '!'){
			putchar('!');
			putchar('!');
			subs++;
		} else 
			putchar(c);

	}

	printf("Number of subs made: %d.\n", subs);

	return 0;
}
