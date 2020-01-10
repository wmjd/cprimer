#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define infile  "12.txt"
#define outfile "12.image"

void maptoresult(int * line, int size, int * resline){
	for(int i=0; i<size; i++){
		resline[i] = line[i] + 33; //ascii 33-42 are good symbols	
	}
	resline[size] = '\0';
}

int main(void){
	
	FILE * in  = fopen(infile, "r");
	FILE * out = fopen(outfile, "w");
	int line[30];
	int resline[31];

	for(int i=0; i < 20; i++){
		for(int j=0; j<30; j++){
			fscanf(in, "%d", line+j);
	 	}
		printf("%s", (char*) line);
		maptoresult(line, 30, resline);

		for(int i=0; i<31; i++)
			fputc(resline[i], stdout);
		fputc('\n', stdout);

		for(int i=0; i<31; i++)
			fputc(resline[i], out);
		fputc('\n', out);
	}
}


