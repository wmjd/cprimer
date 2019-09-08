//takes addr of 3 doubles and moves min to 1st, mid to 2nd, max to 3rd

#include <stdio.h>
#define MIN(x,y) (x<y) ? x : y
#define MAX(x,y) (x>y) ? x : y

void swap(double * a, double * b){
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
 
void foo(double * ap, double * bp, double * cp){

	double a = *ap;
	double b = *bp;
	double c = *cp;

	if(a>b)
		swap(&a,&b);
	if(a>c)
		swap(&a,&c);
	if(b>c)
		swap(&c,&b);
	
	*ap = a;
	*bp = b;
	*cp = c;
}

int main(void){

	double a = 11;
	double b = 1;
	double c = 5;

	printf("a=%lf, b=%lf, c=%lf\n", a,b,c);
	foo(&a, &b, &c);
	printf("a=%lf, b=%lf, c=%lf\n", a,b,c);
	


	return 0;
}
