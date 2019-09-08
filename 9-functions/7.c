//read stdin to EOF. for each ch, report if alpha. if so, report num alphabet. C and c both -> 3. use fun that takes char arg, rets num or -1

#include <stdio.h>

int alphaIndex(char ch){
	if(ch >= 'a' && ch <= 'z')
		return (ch - 'a');
	else if (ch >= 'A' && ch <= 'Z')
		return (ch - 'A');
	else 
		return -1;
}

int main(void){

	int c;
	int indx;
	while((c=getchar()) != EOF){
		indx = alphaIndex(c);
		if(indx != -1){
			printf("%c:%d ", c, indx);
		}else{
			printf("NA ");
		}
	}

	return 0;
}
