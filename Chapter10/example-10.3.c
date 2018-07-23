/* example-10.3 */
#include <stdio.h>

int main(void) {
	int count;
	char line[200],fname[50];
	FILE *f ;

	printf ("ファイル名を入れてください ");
	gets(fname);
	if ((f =fopen(fname,"r"))==NULL) {
		printf ("オープンできません\n");
		return 1;
	}

	count=0;
	while(fgets(line,200,f )!=NULL) {
		count++;
		printf ("%04d:%s",count,line);
	}
	fclose(f );

	return 0;
}
