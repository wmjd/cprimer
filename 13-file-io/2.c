/* copy file program */
#include <stdio.h>

int main(int argc, char **argv){
	if(argc != 3){
		printf("usage: cp srcFile dstFile\n");
		return 1;
	}
	int c;
	FILE * inp, * outp;
	inp = fopen(argv[1],"rb");
	outp = fopen(argv[2],"wb");
	if(inp == NULL || outp == NULL){
		printf("Can't open file(s)\n");
		return 1;
	}
	
	while((c=getc(inp)) != EOF)
		putc(c,outp);


	return 0;
}
