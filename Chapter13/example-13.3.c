/* example-13.3 */
#include <stdio.h>

int main(void)
{
	int x[7]={3,1,4,1,5,9,2},n,i,imax;

	n=7;
	imax=0;

	for(i=1;i<n;i++)
	{
		if (x[i]>x[imax])
		{
			imax=i;
		}
	}
	printf ("最大値は%d 番目の%d\n",imax,x[imax]);
	return 0;
}
