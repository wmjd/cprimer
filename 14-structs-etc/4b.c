//4.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NAMELEN 64

struct Person {
	int id;
	struct {
		char first[NAMELEN];
		char middle[NAMELEN];
		char last[NAMELEN];
	} name;
};

// writes the info in the structure to the dst space. 
// ex:"Dribble, Flossie M. -- 302039823"
void repr(char * dst, struct Person person){
	int i=0;
	for( ; (dst[i] = person.name.last[i]) ; i++)
		;
	dst[i++] = ',';
	dst[i++] = ' ';
	 
	for(int j=0; (dst[i] = person.name.first[j]) ; i++, j++)
		;
	dst[i++] = ' ';

	dst[i++] = person.name.middle[0];
	dst[i++] = '.';
	dst[i++] = ' ';
	dst[i++] = '-';
	dst[i++] = '-';
	dst[i++] = ' ';

	char id_string[NAMELEN];
	sprintf(id_string, "%d", person.id);
	for(int j=0 ; (dst[i++] = id_string[j++]) ; )
		;
	dst[i] = '\0';

	/* For testing...	
	for(int n=0; n<i; n++)
		printf("n:%d	dst[%d]:%d=%c\n", n, n, dst[n], dst[n]);
	*/
}
	
int main(void){
	struct Person people[5] =
	{
		{111, {"John", "Ken", "Joe"}},
		{101, {"Oliver", "Liv", "Olivephant"}},
		{191, {"Jessica", "Rex", "James"}},
		{202, {"Robinson", "Jordan", "TikTok"}},
		{525, {"Alisa", "Alice", "Allison"}}
	};

	for(int i=0; i<5; i++){
		char line[1024];
		repr(line, people[i]);
		printf("%s\n",line);
	}

	
}
