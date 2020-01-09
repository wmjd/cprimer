#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int lastCount(FILE *, long int);
void prefixWordCount(char *);

int main(void){
	FILE *fp;
	char words[MAX];
	long int begin, end;
	int count;

	if((fp = fopen("wordy", "a+")) == NULL){
		fprintf(stdout, "Can't open wordy\n");
		return 1;
	}
	/* is this a new file? */
	fseek(fp, 0L, SEEK_SET);
	begin = ftell(fp);
	fseek(fp, 0l, SEEK_END);
	end = ftell(fp);
	if(begin == end){
		count = 1;
	}else{
	/* find last word count */
		//count =
		 printf("%d", lastCount(fp, end)); //+ 1;	
	}


	puts("Enter words to wordy; end by entering # at start of line");
	while((fscanf(stdin,"%40s",words) == 1) && (words[0]!='#')){
		prefixWordCount(words);	
		fprintf(fp, "%s\n", words);
	}
	
	puts("File contents");
	rewind(fp);
	while(fscanf(fp,"%s\n", words) == 1)
		puts(words);
	puts("Done!");
	
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");


	return 0;
}

int lastCount(FILE * fp, long int pos){
	for(long int i=1; i<=pos; i++){
		fseek(fp, -i, SEEK_END);
		if(getc(fp) == '\n')
			return getc(fp); 
	}	
	return -1;
}
void prefixWordCount(char * words){
	;








}


