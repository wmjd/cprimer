#include <stdio.h>
#include <ctype.h>

int main(void){
	char infile[80], outfile[80];
	FILE * inp, * outp;
	char c;
	printf("Enter infile: ");
	scanf("%s", infile);
	printf("Enter outfile: ");
	scanf("%s", outfile);
	inp = fopen(infile, "r");
	outp = fopen(outfile, "w");
	if(inp == NULL || outp == NULL){
		printf("Can't open file(s)");
		return 1;
	}
	while((c=getc(inp)) != EOF)
		putc(toupper(c), outp);	

	return 0;
}
