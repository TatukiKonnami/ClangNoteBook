/* example-5.9 */
#include <stdio.h>
int main(void)
{
	int i;

	for(i=1;i<=25;i++)
	{
		if (i%4==0) continue;

		printf ("%3d",i);
	}
	printf ("\n");
	return 0;
}
