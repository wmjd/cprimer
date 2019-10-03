/* Generate 100 rand num in [1-10]
 * Sort list in dec order
*/

#include <stdio.h>
#include "5.rand.h"

int main(void){

	const int S = 100;	
	int nums[S];
	fill(nums, S);
	sort(nums, S);
	for(int i=0; i<S; i++){
		printf("%d ",nums[i]);
	}
	
	return 0;
}
