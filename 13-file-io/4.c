/* cat file program */
#include <stdio.h>

int main(int argc, char **argv){
	if(argc <= 1){
		printf("usage: cat file1 [file2 file3 ...]\n");
		return 1;
	}
	FILE * fp;
	int c;
	for(int i=1; i<argc; i++){
		if((fp=fopen(argv[i],"rb")) == NULL){
			printf("Can't open file: %s\n", argv[i]);
			return 1;
		}else{
			while((c=getc(fp)) != EOF)
				putc(c,stdout);
			fclose(fp);
		}
	}

	return 0;
}
