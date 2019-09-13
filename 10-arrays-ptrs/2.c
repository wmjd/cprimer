/*
 * init double arr[] and copy 3 times in main. 
 * 1st function arr notation
 * 2nd function ptr notation
 * 3rd function is ptrs with ptr to end instead of len
 */

#include <stdio.h>

void copy1(double dst[], double src[], int size);
void copy2(double *dst, double *src, int size);
void copy3(double *dst, double *src_start, double *src_after); 
	//src_after is not last item, but one place after the end

int main(void){

	double arr[7] = {1,2,3,4,5,6,7};
	double b[7], c[7], d[7];

	copy1(b, arr, sizeof(arr)/sizeof(double));
	copy2(c, arr, sizeof(arr)/sizeof(double));
	copy3(d, arr, sizeof(arr)/sizeof(double) + arr);

	for(int j = 0; j < 7; j++)
		printf("%lf ", b[j]);
	putchar('\n');
	for(int j = 0; j < 7; j++)
		printf("%lf ", c[j]);
	putchar('\n');
	for(int j = 0; j < 7; j++)
		printf("%lf ", d[j]); 		
	putchar('\n');

	return 0;
}

void copy1(double dst[], double src[], int size){
	for(int i = 0; i < size; i++){
		dst[i] = src[i];
	}
}
void copy2(double *dst, double *src, int size){
	for(int i = 0; i < size; i++){
		*(dst+i) = *(src+i);
	}
}
void copy3(double *dst, double *src, double *src_after){
	while(src < src_after)
		*dst++ = *src++;
}
