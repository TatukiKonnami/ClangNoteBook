/* example-10.1 */
#include <stdio.h>

int main(void) {
	int x;
	FILE *f;

	f=fopen("data1.txt","r");
	if (f==NULL) {
		printf ("オープンできません\n");
		return 9;
	}
	fscanf (f,"%d",&x);
	printf ("x=%d\n",x);
	fclose(f );

	return 0;
}
