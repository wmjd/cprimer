#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define NL printf("\n");


int main(void) {

	char name[80];
	printf("Enter name: ");
	scanf("%s", name);	
	
	//print name enclosed in dub wuotes ""
	printf("\"%s\"", name);
	NL	

	//print name in field 20 char wide with whole field in quotes, name at right end	
	printf("%20s.", name);
	NL

	//print at left end of field
	printf("%-20s.", name);
	NL

	return 0;
}


