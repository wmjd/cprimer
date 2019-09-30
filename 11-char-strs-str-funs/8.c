/* string_in s1 s2
 * if s2 is contained within s1,
 * return ptr to start of contained string in s1
*/

#include <stdio.h>

char * str_in(char *, char *);
int _strcmp(char *, char *);

int main(void){

	char s1[] = "this is a test";
	char s2[] = "a test";
	char s3[] = "this is a test!";

	printf("%s\n", str_in(s1, s2));
	printf("%s\n", str_in(s1, s3));


	return 0;
}

char * str_in(char * s1, char * s2){
	
	while(*s1 != '\0'){
		if(_strcmp(s1, s2))
			return s1;
		s1++;	
	}
	
	return NULL;
}

int _strcmp(char * s1, char *s2){
	while(*s2 != '\0')
		if(*s2++ != *s1++)
			return 0;
	return 1;
}
