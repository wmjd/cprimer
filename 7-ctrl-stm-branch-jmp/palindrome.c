#include <stdio.h>
#include <string.h>

int isPal(char *);

int main(void){

	char test0[] = "abcdcba";
	char test1[] = "Nope.";
	char test2[] = "";
	char test3[] = "abcddcba";

	printf("%d %d %d %d", 
		isPal(test0), isPal(test1), isPal(test2), isPal(test3));


}

int isPal(char * s){
	
	int a = 0;
	int b = strlen(s)-1;
	
	while(b>a){
		if(s[a++] != s[b--])
			return 0; 
	}

	return 1;
}
