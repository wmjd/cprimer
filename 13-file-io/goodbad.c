#include <stdio.h>

int main(void){
	//good design
	int ch;
	FILE * fp;
	fp = fopen("wacky.txt", "r");
	ch = getc(fp);
	while(ch != EOF){
		putchar(ch);
		ch = getc(fp);
	}

	//good design
	int ch2;
	FILE * fp2;
	fp2 = fopen("wacky2.txt", "r");
	while(( ch2 = getc(fp2)) != EOF){
		putchar(ch2);
	}

	//BAD design
	int ch3;
	FILE * fp3;
	fp3 = fopen("wacky3.txt", "r");
	while(ch3 != EOF) //undetermined value of ch3!!!!
	{
		ch3 = getc(fp3);
		putchar(ch);
	}
	
	return 0
}

/*
First problem is ch not assigned before checking for EOF.
Second problem is if getc rets EOF, putchar tries to process EOF as if it were valid.
*/
