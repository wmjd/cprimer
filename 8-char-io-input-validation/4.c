//reads stdin. reports average word length
//this program doesn't handle nonalpha properly yet!!

#include <stdio.h>
#include <string.h>
#define MAXWORD 80

int main(void){


	char word[MAXWORD];
	int ccount = 0; //only counts chars [a-z][A-Z]
	int wcount = 0;

	while( 1 == scanf("%s", word)){
		wcount++;
		ccount += strlen(word);

//		printf("%s", word);

	}

	printf("Reporting %d words, totaling %d chars, averaging %f char/word.\n",
		wcount, ccount, (float) ccount/wcount);

	return 0;
}
