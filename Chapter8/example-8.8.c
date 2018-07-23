/* example-8.8 */
#include <stdio.h>

int input(void);
void smaller(int x,int y);

int main(void) {
	int a,b;

	a=input();
	b=input();
	smaller(a,b);

	return 0;
}

int input(void) {
	int v;

	printf ("整数を入れてください ");
	scanf ("%d",&v);

	return v;
}

void smaller(int x,int y) {
	int v;

	if (x<y) v=x; else v=y;
	printf ("%d が小さい\n",v);
}
