/* read first word from line of input into array
 * discard rest of line. skip w/s.
 * a word is a seq of chars w/o w/s
 * ALSO: take a second parameter specifying max n chars to read
*/

#include <stdio.h>
#define MAXWORD 10

void readWord(char *, int);
int main(void){
	

	char buf[MAXWORD];
	readWord(buf, MAXWORD-1);
	printf("%s\n", buf);
	readWord(buf, MAXWORD-1);
	printf("%s\n", buf);

	return 0;
}

void readWord(char * a, int n){
	if(n == 0)
		return ; //read nothing!

	int c, i=0;

	//skip leading ws
	while((c=getchar()) == ' ' || c == '\t' || c == '\n')
		;

	//read word
	do{
		a[i++] = c;
	}while(i < n && (c=getchar()) != ' ' && c != '\t' && c != '\n');
	
	//add null terminated byte for printing
	a[i] = 0; 

	//discard rest of line
	while(getchar() != '\n')
		;
}
