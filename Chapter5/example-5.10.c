/* example-5.10 */
#include <stdio.h>
int main(void)
{
	int i,j,size;

	printf ("サイズは? ");
	scanf ("%d",&size);

	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			printf (" *");
		}
		printf ("\n");
	}
	return 0;
}
