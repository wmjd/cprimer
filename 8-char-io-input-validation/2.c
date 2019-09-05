/*
*  reads stdin until EOF.
*  prints each char and ascii code
*  special non-printing/ws chars:
*  for c < SPACE, use ctrl notation: prefix carrot, "^%c",(c+64)	
*  print 10 pairs of char, code then newline. or sooner if c='\n'
*/

#include <stdio.h>

#define SPACE 32

int main(void){

	int n = 0;
	int c;
	
	while((c=getchar()) != EOF){
		if(n == 10){
			putchar('\n');
			n = 0;
		}else if(c<SPACE){
			printf(" ^%c:%d.", c+64, c);
			n++;
		}else{
			printf(" %c:%d.", c,c);
			n++;
		}
	}

	return 0;
}

