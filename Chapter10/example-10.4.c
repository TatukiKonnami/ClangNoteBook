/* example-10.4 */
#include <stdio.h>

int main(void) {
	int i;
	FILE *f;

	if ((f =fopen("data3.txt","w"))==NULL) {
		printf ("オープンできません\n");
		return 9;
	}

	for(i=100;i<=500;i+=100) fprintf (f,"%d\n",i);
	fclose(f );

	return 0;
}
