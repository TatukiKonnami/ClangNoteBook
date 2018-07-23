/* example-9.1 */
#include <stdio.h>

int main(void) {
	int a,b;
	int *p;

	a=354;
	p=&a;
	b=*p;
	printf ("a=%d b=%d *p=%d\n",a,b,*p);

	*p=111;
	printf ("a=%d b=%d *p=%d\n",a,b,*p);

	return 0;
}
