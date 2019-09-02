//scanf %c until nl and print line in reverse

#include <stdio.h>
#include <string.h>
#define MAX 1024
int main(void){

	char line[MAX];
	int index = 0;
	do {
		scanf("%c", line+index);
	}
	while(line[index++] != '\n');
	line[--index] = '\0';		

	int i = 0; 
	int j = strlen(line);
	char rev[index];
	rev[j--] = '\0';
	while(j>=i){
		rev[i] = line[j];
		rev[j--] = line[i++];
	}
	
	printf("%s", rev);
	
	return 0;
}
