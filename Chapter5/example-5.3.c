/* example-5.3 */
#include <stdio.h>
int main(void) {
	int count;
	double x;
	x=100;
	count=0;
	do {
		x/=2; /* x=x/2; と同じ */
		count++;
		printf ("%4d%8.4f\n",count,x);
	} while(x>1.0);
	return 0;
}
