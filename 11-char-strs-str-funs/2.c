/* fun fetches next n chars from input
 * stores in array whose addr is arg
 * modified to stop after n chars OR after first blank,tab,nl.
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

//this function is modified.
void f(char *a, int n){
	for(int i=0; i<n; i++){
		a[i] = getchar();
		if(a[i] == ' ' || a[i] == '\n' || a[i] == '\t'){
			break ;
		}
	}
}

void g(char *a, int n){
	for(int i=0; i<n; i++)
		putchar(a[i]);
}
