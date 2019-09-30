/* Exercise 11.5
 * search string specified in 1st param
 * for 1st occurence of char
 * specified in 2nd param 
 * ret ptr to char if successful, else ret null if not in string
*/

#include <stdio.h>

char *  _strchr(char *, char);

int main(void){

	printf("%s\n", _strchr("This is a test", 'a'));
	printf("%s\n", _strchr("This is lunch", 'l'));
	printf("%s\n", _strchr("This contains letters except", 'z') == NULL ? "NULL" : "expected null actually");
	printf("%s\n", _strchr("bullshit", 's'));

	return 0;
}

char * _strchr(char * str, char chr){
	for( ; *str != '\0'; str++){
		if(*str == chr)
			return str;
	}

	return NULL;
}
