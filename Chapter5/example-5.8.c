/* example-5.8 */
#include <stdio.h>
int main(void)
{
	int count;
	double x,sum,av;

	count=0;
	sum=0;

	while(count<10)
	{
		printf ("データを入れてください ");
		scanf ("%lf",&x);

		if (x<=0) break;

		sum+=x;
		count++;
	}
	av=sum/count;
	printf ("個数=%d 合計=%8.3f 平均=%7.3f\n",count,sum,av);
	return 0;
}
