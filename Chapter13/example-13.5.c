/* example-13.5 */
#include <stdio.h>

int main(void) 
{
	int x[7]={3,1,4,1,5,9,2},n,i,sum;

	n=7;
	sum=0;

	for(i=0;i<=n-1;i++)
	{
		sum+=x[i];
	}

	printf ("合計は%d\n",sum);
	return 0;
}
