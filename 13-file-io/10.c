/* 10.c

user supplies: file
loop: user supplies: pos
		print from pos to next \n
		negative pos to end
*/

#include <stdio.h>
#include <stdlib.h>
int main(void){
	char filename[128];
	FILE * stream;
	long int pos = 0;
	int ch;
	int end;

	printf("Enter a file: ");
	scanf("%s", filename);
	if((stream = fopen(filename, "r")) == NULL){
		printf("Can't open %s. Bye-bye!", filename);
		exit(1);
	}

	fseek(stream, 0L, SEEK_END);
	end = ftell(stream);

	int ret;
	
	loop: { 
		printf("Enter a position: ");
		ret = scanf("%ld", &pos);
		if(!ret){
			while((ret = getchar()) != '\n');
//			doesn't matter that if the next line exists.
//			good to understand WHY!
//			ungetc(ret, stdin);
			goto loop;
		}else if(pos > end){
			puts("That is not a valid position.");
			goto loop;
		}else if(pos < 0){ //proper termination of user interaction
			exit(0);
		}else{ 
			fseek(stream, pos, SEEK_SET); 
			while((ch=getc(stream)) != '\n') putchar(ch);
			putchar('\n');
			goto loop;
		}
	}	

	exit(0);
}
