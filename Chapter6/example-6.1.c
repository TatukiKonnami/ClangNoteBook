/* example-6.1 */
#include <stdio.h>

int main(void) {
	int i;
	double r[5];

	for(i=0;i<=4;i++) {
		printf ("%d 番のデータ? ",i);
		scanf ("%lf",&r[i]);
	}

	for(i=4;i>=0;i--) printf ("%8.1f",r[i]);

	printf ("\n");
	return 0;
}
