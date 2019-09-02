/* have user enter uppercase letter. Use nested loops to produce pyramid:

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA 

The pattern should extend to the char entered. SHown is input: E
*/

#include <stdio.h>

int main(void){
	char input;

	if(scanf("%c", &input) != 1 || input > 'Z' || input < 'A' ){
		printf("Unexpected input. Bye-bye.\n");
		return 0;	
	}
	
	//loop from A to input with i
	for(int i = 'A'; i <= input; i++){  
		//print space
		for(int j = i; j < input; j++){
			printf(" ");
		}
		//print ascend
		for(int k = 'A'; k <= i; k++){
			printf("%c", k); 
		}
		//print descend	
		for(int l = i-1; l >= 'A'; l--){
			printf("%c", l);
		}	
		//print nl
		printf("\n");
	}


	return 0;
}
