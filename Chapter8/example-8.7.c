/* example-8.7 */
#include <stdio.h>
#include <math.h>

int post(double w);
	int main(void) {
	double weight;
	int charge;

	printf ("重さを入れてください ");
	scanf ("%lf",&weight);

	charge=post(weight);
	if (charge==0) printf ("エラーです\n");
	else printf ("%d 円です\n",charge);

	return 0;
}

int post(double w) {
	int t;

	if (w<=0 || w>20) return 0;

	t=ceil(w);
	if (w<=5) return 600*t+1200;
	if (w<=10) return 500*t+1700;
	return 300*t+3700;
}
