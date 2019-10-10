#include <stdio.h>

int main(int argc, char ** argv){

	if(argc != 2)
		return 1;

	FILE * fp;
	fp = fopen(argv[1], "r");

	int c;
	while((c=getc(fp)) != EOF)
		putchar(c);
	return 0;
}
