//read input stream until c='#'. Report number of occurances of sequence 'ei'.

#include<stdio.h>
#define END '#'

int main(void){

	char ch;
	int flag = 0;
	int num = 0;

	while((ch=getchar()) != END){
	
		if(flag){
			if(ch == 'i'){
				num++;
				flag = 0;
			}else if(ch == 'e') {
				;
			}else{
				flag = 0;
			}
		}else if(ch == 'e'){
			flag = 1;
		}
	}
	//print
	printf("Number of 'ei' sequences: %d\n", num);


	return 0;
}
