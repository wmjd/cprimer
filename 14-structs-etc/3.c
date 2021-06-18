// book.c one-book inventory
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 40 //max length of title+1
#define MAXAUTL 40 //max length of author name + 1
#define MAXBKS 100 //max num of books

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void){
	struct book * library[MAXBKS]; //declare library as array of pointers to book structs
	int count = 0;

	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while(count < MAXBKS){
		library[count] = malloc(sizeof(struct book));
		if(s_gets(library[count]->title, MAXTITL) == NULL || library[count]->title[0] == '\0')
			break; 
	
		printf("Now enter the author.\n");
		s_gets(library[count]->author, MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f", &library[count++]->value);
		while(getchar() != '\n')
			continue; //clear input line
		if(count < MAXBKS)
			printf("Enter the next title.\n");
	}

	if(count > 0){
		printf("Here is the list of your books in original order:\n");
		for(int i=0; i < count; i++){
			printf("\t%s by %s: $%.2f\n", library[i]->title, library[i]->author,
				library[i]->value);
		}


		printf("Here is the list of your books alphabetized by title:\n");
		struct book * temp;
		for(int i = 0; i < count; i++){
			for(int j = i; j < count; j++){
				if( strcmp(library[i]->title, library[j]->title) > 0 ){
					temp = library[i];
					library[i] = library[j];
					library[j] = temp;			
				} 
			}
		}
		for(int i=0; i < count; i++){
			printf("\t%s by %s: $%.2f\n", library[i]->title, library[i]->author,
				library[i]->value);
		}
 

		printf("Here is the list of your books ordered by increasing value:\n");
		for(int i = 0; i < count; i++){
			for(int j = i; j < count; j++){
				if( library[i]->value >  library[j]->value ){
					temp = library[i];
					library[i] = library[j];
					library[j] = temp;			
				} 
			}
		}
		for(int i=0; i < count; i++){
			printf("\t%s by %s: $%.2f\n", library[i]->title, library[i]->author,
				library[i]->value);
		}

	} else {
		printf("No books? Too bad!\n");
	}
	return 0;
	
}
//s_gets strips newline chars that fgets() usually stores in the string
char * s_gets(char * st, int n){
	char * ret_val;
	char * find;
 
	ret_val = fgets(st, n, stdin);

	if(ret_val){
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}

	return ret_val;
}
