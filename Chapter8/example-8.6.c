/* example-8.6 */
#include <stdio.h>

double en(double r);

int main(void) {
	double hankei,menseki;

	printf ("半径を入れてください ");
	scanf ("%lf",&hankei);

	menseki=en(hankei);
	printf ("面積は%8.2f です\n",menseki);

	return 0;
}

double en(double r) {
	double s;

	s=3.14159265*r*r;

	return s;
}
