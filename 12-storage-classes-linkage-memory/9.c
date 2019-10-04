#include <stdio.h>
#include <stdlib.h>

int main(void){
	int nwords;
	char ** words;

	printf("Aye dawg, how many words you wanna enter?");
	scanf("%d", &nwords);
	words = (char **) malloc(sizeof(char *) * nwords);

	printf("Enter %d words now: ", nwords);
	for(int i=0; i<nwords; i++){
		scanf("%s", *words+i);
		printf("%s", *words+i);
	}

	printf("Here's the words:\n");
	for(int i=0; i<nwords; i++){
		printf("%s", *(words+i));
	}


	return 0;
}
