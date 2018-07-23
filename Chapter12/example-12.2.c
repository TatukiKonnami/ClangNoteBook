/* example-12.2 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	double rd;
	int i,n,ri;

	srand((unsigned int)time(NULL));

	for(i=1;i<=10;i++) {
		n=rand();
		ri=n%100;
		rd=(double)n/RAND_MAX;
		printf ("%6d%6d%10.6f\n",n,ri,rd);
	}
	return 0;
}
