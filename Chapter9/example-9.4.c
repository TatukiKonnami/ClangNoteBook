/* example-9.4 */
#include <stdio.h>

double sum(double *w);

int main(void) {
	double s,x[4];

	x[0]=2.4; x[1]=3.8; x[2]=6.2; x[3]=4.9;
	s=sum(x);
	printf ("合計=%7.2f\n",s);

	return 0;
}

double sum(double *w) {
	int j;
	double y;

	y=0;
	for(j=0;j<=3;j++) y+=w[j];
	return y;
}
