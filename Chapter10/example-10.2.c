/* example-10.2 */
#include <stdio.h>

int main(void) {
	int x,sum;
	FILE *f;

	if ((f =fopen("data2.txt","r"))==NULL) {
		printf("オープンできません\n");
		return 1;
	}

	sum=0;
	while(fscanf (f,"%d",&x)!=EOF) {
		sum+=x;
	}
	fclose(f);
	printf ("合計=%d\n",sum);

	return 0;
}
