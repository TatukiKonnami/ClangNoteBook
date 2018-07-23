/* example-5.7 */
#include <stdio.h>
int main(void) {
	int i;
	double x,sum;
	sum=0;

	for(i=1;i<=7;i++) {
		printf ("%d 番のデータ? ",i);
		scanf ("%lf",&x);
		sum+=x;
	}

	printf ("合計=%f\n",sum);
	return 0;
}
