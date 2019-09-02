//read single word into char array. print in reverse

#include <stdio.h>
#include <string.h>

int main(void){

	char word[80];
	scanf("%s", word);

	for(int offset = strlen(word) -1; offset >= 0; offset--){
		putchar(word[offset]) ;
	}
	
	putchar('\n');

	return 0;
}
