//user inputs ASCII, program outputs char to stdout

#include <stdio.h>

int main(void){
	int code;
	printf("Enter ASCII code: ");
	scanf("%d", &code); //appears to print a newline
	printf("%d => %c\n", code, code); 

}
