/* 10.c

user prompted for file.
in a loop:
	user supplies pos
	print from pos to next \n
	enter negative pos to end.

*/

#include <stdio.h>
#include <stdlib.h>
int main(void){
	char filename[128];
	FILE * stream;
	long int pos = 0; 
	int ch;  //used in loop that outputs file contents from pos
	int end; //used for bounds checking pos

	printf("Enter a file: ");
	scanf("%s", filename);
	if((stream = fopen(filename, "r")) == NULL){
		printf("Can't open %s. Bye-bye!", filename);
		exit(1);
	}

	fseek(stream, 0L, SEEK_END);
	end = ftell(stream);

	int ret; //ret of scan
	loop: { 
		printf("Enter a position: ");
		ret = scanf("%ld", &pos);
		if(!ret){	
			while((ret = getchar()) != '\n')
				;
			puts("That is not a valid position.");
			goto loop;
		}else if(pos > end){
			puts("That is not a valid position.");
			goto loop;
		}else if(pos < 0){ //proper termination of user interaction
			exit(0);
		}else{ 
			fseek(stream, pos, SEEK_SET); 
			while((ch=getc(stream)) != '\n')
				putchar(ch);
			putchar('\n');
			goto loop;
		}
	}	
	exit(0);
}
