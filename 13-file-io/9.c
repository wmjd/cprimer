#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lastCount.h"
#define MAX 41

void itoa(int, char *);
void reverse(char *);
 
int main(void){
	FILE *fp;
	char words[MAX];
	char counttoa[MAX];
	int count;

	if((fp = fopen("wordy", "a+")) == NULL){
		fprintf(stdout, "Can't open wordy\n");
		return 1;
	}

	fseek(fp, 0L, SEEK_SET);
	int beg = ftell(fp);
	fseek(fp, 0L, SEEK_END);
	int end = ftell(fp);
	if(beg == end) 
		count = 1;
	else
		count = lastCount(fp, end) + 1;

	
	puts("Enter words to wordy by entering # at start of line");
	while((fscanf(stdin,"%40s",words) == 1) && (words[0]!='#')){
		itoa(count++, counttoa);	
		fputs(counttoa, fp);
		fprintf(fp, " %s\n", words);
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

void itoa(int n, char s[])
 {
     int i, sign;
 
     if ((sign = n) < 0)  /* record sign */
         n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     reverse(s);
 }
 /* reverse:  reverse string s in place */
 void reverse(char s[])
 {
     int i, j;
     char c;
 
     for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }
