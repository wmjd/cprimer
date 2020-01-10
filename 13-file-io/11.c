/* syntax: command string filename
 * searches files and prints all lines containing string
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STALKS 256
int main(int argc, char ** argv){
	
	FILE * haystack;    //file to search for
	char * needle;     //substring to find 
	char hay[STALKS];  //line-by-line
	
	if(argc != 3){
		puts("usage: command needle haystack");
		return 1;
	}else if( !(haystack = fopen(argv[1],"r")) ){
		puts("can't open haystack");
		return 1;
	}else{
		needle = argv[2];
	
		loop: 
			if(fgets(hay, STALKS, haystack)){
				if(strstr(hay, needle))
					fputs(hay, stdout);
				goto loop;
			}
		
		return 0;						
	}
}
