/* open two files
 * alternate printing every line of each time until last file is printed
 */

#include <stdio.h>
#include <stdlib.h>

#define BUFLEN 1024

int main(int argc, char ** argv){
	if(argc != 3){
		puts("usage: command file1 file2");
		exit(EXIT_FAILURE);
	}	

	FILE * f1, * f2;
	if((f1 = fopen(argv[1], "w")) == NULL){
		puts("can't open  argv[1]");
		exit(EXIT_FAILURE);
	} 
	if((f2 = fopen(argv[2], "w")) == NULL){
		puts("can't open argv[2]");
		exit(EXIT_FAILURE);
	}

	char buf[BUFLEN];
	fgets(buf, BUFLEN, f1);
	puts(buf);
}
