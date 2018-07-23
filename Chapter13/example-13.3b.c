/* example-13.3c */
#include <stdio.h>

int main(void)
{
	int x[7] = {3,1,4,1,5,9,2}, n, i, max, imax;

	n = 7;
	max = x[0];
	imax = 0;

	for(i = 1; i < n; i++)
	{
		if(max < x[i])
		{
			max = x[i];
			imax = i;
		}
	}

	printf ("最大値は%d 番目の%d\n", imax, max);
	return 0;
}
