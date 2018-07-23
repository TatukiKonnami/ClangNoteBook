/* example-9.6 */
#include <stdio.h>

int x,y;
void addsub(int a, int b);

int main(void) {
	int a,b;

	a=35;
	b=48;
	addsub(a,b);
	printf ("x=%d y=%d\n",x,y);

	return 0;
}

void addsub(int a, int b) {
	x=a+b;
	y=a-b;
}
