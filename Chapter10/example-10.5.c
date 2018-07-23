/* example-10.5 */
#include <stdio.h>
#include <math.h>

int main(void) {
	int i;
	double x,y,t,dt;
	FILE *f;

	if ((f =fopen("data4.csv","w"))==NULL) {
		printf ("オープンできません\n");
		return 1;
	}
	fputs("x=sin(3*t) y=sin(4*t)\n",f);

	dt=3.14159265/60;
	for(i=0;i<=120;i++) {
		t=dt*i;
		x=sin(3*t);
		y=sin(4*t);
		printf ("%f,%f\n",x,y);
		fprintf (f,"%f,%f\n",x,y);
	}
	fclose(f );

	return 0;
}
