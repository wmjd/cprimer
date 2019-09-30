//echo cmd line args in rev order

#include <stdio.h>

int main(int argc, char ** argv){

	while(argc){
		printf("%s ", argv[argc-1]);
		argc--;
	}
	putchar('\n');

	return 0;
}
