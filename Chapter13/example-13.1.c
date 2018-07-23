/* example-13.1 */
#include <stdio.h>

int main(void)
{
	int a,b,t;

	printf ("a=");
	scanf ("%d",&a);
	printf ("b=");
	scanf ("%d",&b);
	printf ("a=%d b=%d\n",a,b);

	t=a;
	a=b;
	b=t;

	printf ("a=%d b=%d\n",a,b);
	return 0;
}
