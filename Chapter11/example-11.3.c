/* example-11.3 */
#include <stdio.h>

struct vector {
	double x;
	double y;
};

typedef struct vector vec;

vec add(vec u, vec v);

int main(void) {
	vec a,b,w;
	a.x=2.2;
	a.y=3.5;
	b.x=-2.8;
	b.y=4.5;
	w=add(a,b);
	printf("(%.2f,%.2f)\n",w.x,w.y);
	return 0;
}

vec add(vec u, vec v) {
	vec r;
	r.x=u.x+v.x;
	r.y=u.y+v.y;
	return r;
}
