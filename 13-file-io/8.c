/* 
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char ** argv){
	
	int c;
	int count;

	if(argc < 2){
		printf("usage: cmd char [file1 file2 ...]\n");
	}

	if(argc == 2){
		while((c=getchar()) != EOF){
			if(c == argv[1][0])
				count++;
		}
		printf("The character: %c appears %d time(s) in stdin\n",
			argv[1][0], count);
	} else {

	}

	

	return 0;
}
