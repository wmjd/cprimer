/* mystrcpy s1, s2, n
 * copies exactly n chars from s2 into s1
 * s1 is not null terminated unless len(s2) < n 
*/

#include <stdio.h>

char * mystrcpy(char *, char *, int);

int main(void){

	char s1[] = "!!!!!!!!!!!!!!!!!!";
	char s2[] = "some of this string will be replaced!";

	printf("%s\n", mystrcpy(s2, s1, 10));

	return 0;
}

char * mystrcpy(char *s1, char *s2, int n){
	char * ret = s1;

	while(n--)
		*s1++ = *s2++;
	
	return ret;
}
