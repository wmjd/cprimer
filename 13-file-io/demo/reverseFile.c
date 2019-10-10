#include <stdio.h>

int main(int argc, char ** argv){
	if(argc != 3){
		printf("Need 2 input files. Run me again.\n");
		return 1;
	}

	FILE * sp;
	FILE * dp;
	int c;
	long count, last;
	sp = fopen(argv[1], "r");
	dp = fopen(argv[2], "w");
	if(sp == NULL || dp == NULL){
		printf("Can't open file(s)\n");
		return 1;
	}

	fseek(sp, 0L, SEEK_END);
	last = ftell(sp);
//initialize count to 1L from end. this skips EOF which is included.
	for(count = 1L; count <= last; count++){
		fseek(sp, -count, SEEK_END);
		c = getc(sp);
		putc(c, dp);
	} 
	fclose(sp);
	fclose(dp);

	return 0;
}
