#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1024
int main(int argc, char ** argv){
	FILE * fp;
	char buf[BUF_SIZE];
	char str[] = "The length of this string is less than BUF_SIZE";
	
	/* nothing interesting here */
	if(argc != 2){
		printf("usage: a.out file\n");
		exit(EXIT_FAILURE);
	}
	if((fp = fopen(argv[1], "w")) == NULL){
		printf("can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/* file has now been opened */
	
	setvbuf(fp, buf, _IOFBF, BUF_SIZE);
	fputs(str, fp);
	//while(1);
	getchar();

}
