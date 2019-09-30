#include <stdio.h>

void trim(char *, int, int);

int main(void){
	
	char a[] = "    abc  defg hi\nj";
	trim(a,0,0);
	printf("%s",a);

	return 0;
}

void trim(char * s, int i, int j){
	char c;
	
	if((c=*(s+i)) == '\0'){
		*(s+j) = c;
		return;
	}

	while((c=*(s+i)) == ' ' || c == '\t' || c == '\n')
		i++;
	while((c=*(s+i)) != ' ' && c != '\t' && c != '\n' && c != '\0'){
		*(s+j) = c;
		j++;
		i++;
	}

	trim(s, i, j);
}
