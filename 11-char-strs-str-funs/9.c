#include <stdio.h>

void rev(char *);

int main(void){
	
	char a[] = "this is a sentence.";
	char b[] = "this is a sentence";
	char c[] = "0123456789";
	char d[] = "123456789";

	rev(a); rev(b); rev(c); rev(d);

	printf("%s\n%s\n%s\n%s\n", a,b,c,d);
	
	return 0;
}

void rev(char * start){
	int i=0;
	while(*(start+i)){
		++i;
	}
	--i; //want i to be the last index, ie len-1

	char * end = start + i;
	char temp;	
	while(start < end){
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
