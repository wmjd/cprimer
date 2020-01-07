//print all lines of two files. corrosponding lines are printed on the same line
//this is like 7b but a little different output (i made 7b lines alternate)
// and wanted to solve differently

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFLEN 1024
// if lines are longer than this... there could be problems

int main(int argc, char ** argv){
	
	FILE * f1, * f2;
	char buf[BUFLEN];
	char * posnl; //position of newline	
	char * res; //result of read either NULL or str ptr

	// check argc
	if(argc != 3){
		puts("usage: command file1 file2");
		exit(EXIT_FAILURE);
	}
	// open each file
	if((f1 = fopen(argv[1], "r")) == NULL){
		puts("can't open  argv[1]");
		exit(EXIT_FAILURE);
	} 
	if((f2 = fopen(argv[2], "r")) == NULL){
		puts("can't open argv[2]");
		exit(EXIT_FAILURE);
	}

	// code for reading both
	both:
		//read f1 into buf
		if(fgets(buf, BUFLEN, f1) == NULL)
			goto only_f2;
		//replace newline & print 
		if((posnl = strchr(buf, '\n')))
			*posnl = '\0';
		fputs(buf, stdout);
		//insert space between f1, f2 lines
		putc(' ', stdout);		
		//read f2 into buf
		if(fgets(buf, BUFLEN, f2) == NULL){
			putc('\n', stdout); //still have to terminate f1 line
			goto only_f1;
		}
		//no need to replace newline, just print
		//with fputs which does not print its own newline
		fputs(buf, stdout);	
		//buzz around again since neither read returned NULL
		goto both; 

	// code for reading one 
	only_f1:
		if((fgets(buf, BUFLEN, f1) == NULL))
			goto exit;
		fputs(buf, stdout);
		goto only_f1;

	only_f2:
		if((fgets(buf, BUFLEN, f2) == NULL))
			goto exit;
		fputs(buf, stdout);
		goto only_f2;

	exit:
		return 0;
}
