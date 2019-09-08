//modify get_first() from Listing 8.8 so it rets first non-w/s char encountered.

#include <stdio.h>

char get_first(void);

int main(void){
	
	printf("Called get_first(): %c\n", get_first());

	return 0;
}

char get_first(void){
	int ch;

	while( (ch = getchar()) == ' ' || ch == '\t' || ch == '\n')
		; //skip any white space that occurs before target ch 
	while(getchar() != '\n')
		; //flush  buffer
	return ch;
}
