/* example-8.9 */
#include <stdio.h>
#include <math.h>

double func(double x);
double fact(int n);
double turn(int m);

int main(void) {
	double x,e;

	printf("x の値を入力 ");
	scanf("%lf",&x);
	e=func(x);
	printf("y=%9.4f",e);

	return 0;
}

double func(double x){
	int m;
	double s;

	s=0;
	for(m=0;m<=15;m++) {
		s+=turn(m)/fact(m)*pow(x,m);
	}
	return s;
}

double fact(int n) {
	double s;

	if(n<=1) return 1;

	s=1;
	while(n>1) {
		s*=n;
		n--;
	}
	return s;
}

double turn( int m) {
	if(m%2==0) return 1.0; else return -1.0;
}
