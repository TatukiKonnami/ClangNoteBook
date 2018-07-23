/* example-6.2 */
#include <stdio.h>

int main(void) {
	double x[7]={48.6,41.5,23.2,18.9,92.9,57.0,30.4},d,sum,av;
	int i,count;
	count=7;
	sum=0;

	for(i=0;i<count;i++) sum+=x[i];

	av=sum/count;
	printf (" データ 偏差\n");

	for(i=0;i<count;i++) {
		d=x[i]-av;
		printf ("%8.2f%8.2f\n",x[i],d);
	}

	printf ("データ数=%2d 平均=%8.3f\n",count,av);
	return 0;
}
