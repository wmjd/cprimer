//reduces files by every third char...
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1024

int main(void){
	FILE * in, * out;
	int ch;
	char name[LEN];
	char red[LEN];
	int count = 0;

	//user supplies filename
	printf("enter a file to copy-reduce: ");
	if(!scanf("%s",name)){
		fprintf(stderr, "error: can't scan filename\n");
		exit(EXIT_FAILURE);
	}
	putchar('\n');
	
	//open file
	if((in = fopen(name, "r")) == NULL){
		fprintf(stderr, "can't open %s\n", name);
		exit(EXIT_FAILURE);
	}

	//set-up name.red
	strncpy(red, name, LEN-5);
	strcat(red, ".red");
	if((out = fopen(red, "w")) == NULL){
		fprintf(stderr, "can't create %s\n", red);
		exit(EXIT_FAILURE);
	}

	//copy
	while((ch = getc(in)) != EOF)
		if((count++ % 3) == 0)
			putc(ch,out);
	//clean-up
	if(fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "error closing files\n");

		
	return 0;
	
}
