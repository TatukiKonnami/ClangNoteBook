/* example-4.2 */
#include <stdio.h>
int main(void) {
	int a,b,tmp;

	printf ("整数を入れてください ");
	scanf ("%d",&a);

	printf ("もう1 つ整数を入れてください ");
	scanf ("%d",&b);

	if (a>b) {
		tmp=a;
		a=b;
		b=tmp;
	}

	printf ("%d ≦ %d\n",a,b);
	return 0;
}
