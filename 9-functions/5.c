//largerOf() replaces contents of 2 doubles with max of two

#include <stdio.h>

void largerOf(double *,double *);

int main(void){

	double d = 0.0;
	double e = 3.3;

	printf("larger called on stored vals %lf, %lf\n", d,e);
	largerOf(&d,&e);
	printf("changes stored vals to %lf. %f.\n", e,d);
	
	return 0;
}

void largerOf(double * dp, double * ep){
	//should keep dereference in local var instead of all this, let compiler help if it wants. i don't care.
	*dp = (*dp > *ep) ? *dp : *ep ;
	*ep = (*dp > *ep) ? *dp : *ep ;
		
}


