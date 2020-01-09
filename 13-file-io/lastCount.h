#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int lastCount(FILE * fp, long int pos){
	int ch;
	int ret;

	for(long int i=2; i<=pos; i++){
		fseek(fp, -i, SEEK_END);
		ch = getc(fp);
		if(ch == '\n'){
			fscanf(fp, "%d", &ret);
			return ret; 
		}
	}	
	return -1;
}

