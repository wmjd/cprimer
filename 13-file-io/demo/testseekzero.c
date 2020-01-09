/* Testing idea that empty file can be confirmed this way... */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE * stream;
	if((stream = fopen("unique", "a+")) == NULL){
		fprintf(stderr, "cant open unique");
		return 1;
	}
	printf("This is current pos %ld", ftell(stream));
	fseek(stream, 0L, SEEK_END);
	printf("This is current pos %ld", ftell(stream));

	return 0;
}
