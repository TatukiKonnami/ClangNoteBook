/* example-9.2 */
#include <stdio.h>

int main(void) {
	double *p,x[6]={165.3,158.2,174.0,181.6,167.7,-1.0};

	p=x; /* p=&x[0] と同じ */
	while(*p>0) {
		printf ("%8.2f\n",*p);
		p++;
	}

	return 0;
}
