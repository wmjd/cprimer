/* fun fetches next n chars from input
 * stores in array whose addr is arg
*/

#include <stdio.h>

void f(char *, int);
void g(char *, int);

int main(void){

	char s[64];
	int n = 10;

	f(s, n);
	g(s, n);

	return 0;
}

void f(char *a, int n){
	for(int i=0; i<n; i++)
		a[i] = getchar();	
}

void g(char *a, int n){
	for(int i=0; i<n; i++)
		putchar(a[i]);
}
