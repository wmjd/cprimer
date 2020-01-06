#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE * src, FILE * dst);
char * s_gets(char * st, int n);

int main(int argc, char ** argv){
	FILE * fa, * fs;
	int files = 0;
//	char file_app[SLEN];
//	char file_src[SLEN];
	int ch;

	if(argc < 3){
		printf("usage: command dst src1 [src2 ...]\n");
		exit(EXIT_FAILURE);
	}

//	puts("Enter name of dst file:");
//	s_gets(file_app, SLEN);
	if((fa=fopen(argv[1], "a+")) == NULL){
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0){
		fputs("Can't create output buffer\n", stderr);
		exit(EXIT_FAILURE);
	}
//	puts("Enter the name of the first src file (empty line to quit):");
	int i = 2;
	while((i < argc) && argv[i][0] != '\0'){
		if(strcmp(argv[1], argv[i]) == 0)
			fputs("Can't append file to itself\n", stderr);
		else if((fs=fopen(argv[i], "r")) == NULL)
			fprintf(stderr, "Can't open %s", argv[i]);
		else{
			if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0){
				fputs("Can't create input buffer\n", stderr);
				continue;
			}
			append(fs, fa);
			if(ferror(fs) != 0)
				fprintf(stderr, "Error in reading file %s.\n", argv[i]);
			if(ferror(fa) != 0)
				fprintf(stderr, "Error in writing file %s.\n", argv[1]);
			fclose(fs);
			files++;
			printf("File %s appended.\n", argv[i]);
//			puts("Next file (empty line to quit):");
		}	
	i++;
	}
	printf("Done appending. %d files appended.\n", files);
	rewind(fa);
	printf("%s contents:\n", argv[1]);
	while((ch=getc(fa)) != EOF)
		putchar(ch);
	puts("Done displaying.");
	fclose(fa);

	return 0;
}

void append(FILE * src, FILE * dst){
	size_t bytes;
	static char temp[BUFSIZE];
	while((bytes=fread(temp,sizeof(char),BUFSIZE,src))>0)
		fwrite(temp,sizeof(char),bytes,dst);
}

/* use s_gets instead of printf which skips all w/s including \n
 * use s_gets instead of just fgets which preserves \n in str
 * strchr returns ptr to first newline
 * just replace it with terminating null byte
 * discard rest of line
 */

char * s_gets(char * st, int n){
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if(ret_val){
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n') continue;
	}
	return ret_val;
}