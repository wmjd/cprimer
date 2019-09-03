/*read ints until 0. print total even. total odd. avg of each.
i won't know when a string of chars 0-9 starts until i get the first
every input char needs to be checked. variable flag controls in-number
ie set to true if 0-9 read last. used to accumulate a multiple digit integer
*/
//wasn't sure how to deal with 0 as a terminator. just used 'q'. could have figured something out but would need to make assumptions.

#include <stdio.h>

int main(void){

	char c;
	int flag = 0;
	int num = 0;

	int sEven = 0; //sum of evens
	int sOdd = 0; 
	int nEven = 0; //num of evens
	int nOdd = 0;

	while ((c=getchar()) != 'q'){ //break inside if 0 int detected
		if ('0' <= c && '9' > c){
			if(flag){ 
				num *= 10;
				num += c - '0';	
			} else {
				num = c - '0';
				flag = 1;
				
			}			
		} else {
			if (flag){ //end of number build into num var
				if(num & 1){
					nOdd++;			
					sOdd += num;
				} else {
					nEven++;
					sEven += num;
				}
				num = 0;
				flag = 0;
				
			}
		}

	}

	printf("Total Evens: %d.\nTotal Odds: %d.\nAvg of Evens: %f.\nAvg of Odds: %f.\n", sEven, sOdd, (float) sEven/nEven, (float) sOdd/nOdd);	

	return 0;
}
