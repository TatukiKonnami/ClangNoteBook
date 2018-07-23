/* example-12.1 */
#include <stdio.h>

#define LAST 50
/* LAST は項の数 */

int main(void) {
	double s,so,se;
	int i;

	so=0;
	se=0;
	for(i=1;i<=LAST;i+=2) {
		so+=1.0/i;
	}

	for(i=2;i<=LAST;i+=2) {
		se+=1.0/i;
	}
	s=so-se;

	printf ("1/1-1/2+1/3- ... 1/%d=%10.7f\n",LAST,s);
	return 0;
}
