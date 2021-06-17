// book.c one-book inventory
#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 41 //max length of title+1
#define MAXAUTL 31 //max length of author name + 1

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void){
	struct book library; //declare library as book variable
	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL); //access to the title portion
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("Done.\n");
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
