#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	char file[80];
	int ch;
	FILE *fp;
	unsigned long count = 0;
	printf("Enter filename: ");
	scanf("%s", file);
	if((fp=fopen(file, "r")) == NULL){
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}while((ch=getc(fp)) != EOF){
		putc(ch,stdout);
		count++;
	}
	fclose(fp);
	printf("File %s has %lu characters\n", file, count);

	exit(EXIT_SUCCESS);
}
