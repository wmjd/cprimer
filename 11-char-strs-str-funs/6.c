/*
 *
*/

#include <stdio.h>
#define TRUE  1
#define FALSE 0
#define m1 "this is a test"
#define m2 "here is another"
#define m3 "eat your vegetables"

int is_within(char, char *);

int main(void){

	printf("%c in \"%s\" is %d \n", 'a', m1, is_within('a', m1));
	printf("%c in \"%s\" is %d \n", 'a', m1, is_within('a', m2));
	printf("%c in \"%s\" is %d \n", 'z', m1, is_within('z', m3));


	return 0;
}

int is_within(char c, char * s){
	while(*s != '\0')
		if(*s++ == c)
			return TRUE; 
	return FALSE;
}
