/* 10.c

user supplies: file
loop: user supplies: pos
		print from pos to next \n
		negative pos to end
*/

#include <stdio.h>

int main(void){
	char filename[128];
	FILE * stream;
	long int pos;
	int ch;
	int end;

	printf("Enter a file: ");
	scanf("%s", filename);
	if((stream = fopen(filename, "r")) == NULL){
		printf("Can't open %s. Bye-bye", filename);
		return 1;
	}

	fseek(stream, 0L, SEEK_END);
	end = ftell(stream);

	do{
		printf("Enter a position: ");
		scanf("%ld", &pos);
		if(pos > end){
			puts("That is not a valid position.");
			continue;
		}
		fseek(stream, pos, SEEK_SET); 
		while((ch=getc(stream)) != '\n')
			putchar(ch);
		putchar('\n');
	}while(pos >= 0);
	
}
