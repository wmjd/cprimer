/* open two files
 * 7a: alternate printing every line of each time until last file is printed
 * 7b: modify 7a to same lines with same lineno printed same line
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFLEN 1024



int main(int argc, char ** argv){
	if(argc != 3){
		puts("usage: command file1 file2");
		exit(EXIT_FAILURE);
	}	

	FILE * f1, * f2;
	if((f1 = fopen(argv[1], "r")) == NULL){
		puts("can't open  argv[1]");
		exit(EXIT_FAILURE);
	} 
	if((f2 = fopen(argv[2], "r")) == NULL){
		puts("can't open argv[2]");
		exit(EXIT_FAILURE);
	}

	char buf[BUFLEN];
	FILE * temp;
	char * find;

	while(fgets(buf, BUFLEN, f1)){	
		find = strchr(buf, '\n');
		if(find) *find = '\0';
		fputs(buf, stdout);
		if(fgets(buf, BUFLEN, f2)){
			fputs(buf, stdout);
		}
		temp = f1;
		f1 = f2;
		f2 = temp;
	}
	f1 = f2;
	while(fgets(buf, BUFLEN, f1))
		fputs(buf, stdout);

	return 0;
}
