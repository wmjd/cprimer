//rewrite 4 with switch-case instead 

#include <stdio.h>
#define END '#'

int main(void){

	char c;
	int subs = 0;
	
	while((c=getchar()) != END) {
		switch(c){
			case '.':	
				putchar('!');
				subs++;
				break;
			case '!':
				putchar('!');
				putchar('!');
				subs++;
				break;
			default: 
				putchar(c);
				break;
		}
	}

	printf("Number of subs made: %d.\n", subs);

	return 0;
}
