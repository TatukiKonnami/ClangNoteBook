/* example-13.3a */
#include <stdio.h>

int main(void)
{
	int x[7] = {3,1,4,1,5,9,2}, n, i, max;

	n = 7;
	max = x[0];

	for(i = 1; i < n; i++)
	{
		if(max < x[i])
		{
			max = x[i];
		}
	}

	printf ("最大値は%d\n", max);
	return 0;
}
