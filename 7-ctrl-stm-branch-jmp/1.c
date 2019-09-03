/*
Read input until '#'. Program reports number of ' ', '\n', and all other chars
*/

#include <stdio.h>

int main(void){

	char c;
	int nspace = 0;
	int nnewline = 0;
	int nother = 0;
	while((c = getchar()) != '#'){
		switch(c){
			case ' ' : 
				nspace++;
				break;
			case '\n' :
				nnewline++;
				break;
			default:
				nother++;
				break;
		}
	}
	printf("Spaces: %d. Newlines: %d. Other: %d", nspace, nnewline, nother);

	return 0;
}
