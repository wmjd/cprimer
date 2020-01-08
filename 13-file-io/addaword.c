#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void){
	FILE *fp;
	char words[MAX];

	if((fp = fopen("wordy", "a+")) == NULL){
		fprintf(stdout, "Can't open wordy\n");
		return 1;
	}
	
	puts("Enter words to wordy by entering # at start of line");
	while((fscanf(stdin,"%40s",words) == 1) && (words[0]!='#'))
		fprintf(fp, "%s\n", words);
	
	puts("File contents");
	rewind(fp);
	while(fscanf(fp,"%s\n", words) == 1)
		puts(words);
	puts("Done!");
	
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");


	return 0;
}
