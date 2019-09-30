/* read first word from line of input into array
 * discard rest of line. skip w/s.
 * a word is a seq of chars w/o w/s
*/

#include <stdio.h>
#define MAXWORD 80

void readWord(char *);
int main(void){
	

	char buf[MAXWORD];
	readWord(buf);
	printf("%s\n", buf);
	readWord(buf);
	printf("%s\n", buf);

	return 0;
}

void readWord(char * a){

	int c, i=0;

	//skip leading ws
	while((c=getchar()) == ' ' || c == '\t' || c == '\n')
		;

	//read word
	do{
		a[i++] = c;
	}while((c=getchar()) != ' ' && c != '\t' && c != '\n');
	
	//add null terminated byte for printing
	a[i] = 0; 

	//discard trailing ws and nl
	while(getchar() != '\n')
		;
}
