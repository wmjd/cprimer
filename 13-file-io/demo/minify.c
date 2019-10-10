#include <stdio.h>

int main(int argc, char ** argv){
	if(argc != 3)
		return 1;
	
	FILE * sp, *dp;
	sp = fopen(argv[1], "r");
	dp = fopen(argv[2], "w");
	if(sp == NULL || dp == NULL)
		return 1;

	int c;
	while((c=getc(sp)) != EOF){
		if(c == ' ' || c == '\n' || c == '\t')
			continue;
		else
			putc(c, dp);
	}
	if(fclose(sp) != 0 || fclose(dp) != 0)
		return 1;


	return 0;
}
