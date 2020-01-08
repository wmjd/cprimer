/* 
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char ** argv){
	
	int c;
	int count;
	FILE * stream;

	if(argc < 2){
		fprintf(stderr, "usage: cmd char [file1 file2 ...]\n");
		exit(EXIT_FAILURE);
	}

	if(argc == 2){
		while((c=getchar()) != EOF)
			if(c == argv[1][0])
				count++;
		printf("The character: %c appears %d time(s) in stdin\n",
			argv[1][0], count);
		exit(EXIT_SUCCESS);
	} 

	for(int i=2; i < argc; i++){
		if((stream = fopen(argv[i], "r")) == NULL){
			fprintf(stderr, "can't open file: %s\n", argv[i]);
			exit(EXIT_FAILURE);
		}
		while((c=fgetc(stream)) != EOF)
			if(c == argv[1][0])
				count++;
		printf("The character: %c appears %d time(s) in %s\n",
			argv[1][0], count, argv[i]);
		count = 0;
		}

	exit(EXIT_SUCCESS);	
}
