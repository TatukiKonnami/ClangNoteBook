/* example-13.2 */
#include <stdio.h>

int main(void)
{
	int x[7]={3,1,4,1,5,9,2},i,n,t;

	n=7;
	printf ("ローテーション前 ");
	for(i=0;i<=n-1;i++)
	{
		printf ("%3d",x[i]);
	}

	printf ("\n ローテーション後 ");
	t=x[0];
	for(i=1;i<n;i++)
	{
		x[i-1]=x[i];
	}
	x[n-1]=t;

	for(i=0;i<n;i++)
	{
		printf ("%3d",x[i]);
	}

	printf ("\n");
	return 0;
}
