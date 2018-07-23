/* example-5.11 */
#include <stdio.h>
int main(void)
{
	int a,b;

	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf ("%d ",b);
		}
		printf ("\n");
	}
	return 0;
}
