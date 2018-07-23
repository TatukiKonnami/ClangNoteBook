/* example-8.1 */
#include <stdio.h>
#include <math.h>

int main(void) {
	int k;
	double a,b,c;

	for(k=1;k<=6;k++) {
		a=0.5*k;
		b=sqrt(a);
		c=pow(a,2);
		printf ("%5.1f%8.4f%8.4f\n",a,b,c);
	}

	return 0;
}
