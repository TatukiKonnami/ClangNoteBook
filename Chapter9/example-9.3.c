/* example-9.3 */
#include <stdio.h>

void addsub(int v, int w, int *px, int *py);

int main(void) {
	int a,b,c,d;

	a=12; b=34;
	addsub(a,b,&c,&d);
	printf ("c=%d d=%d\n",c,d);

	return 0;
}

void addsub(int v, int w, int *px, int *py) {
	*px=v+w;
	*py=v-w;
}
