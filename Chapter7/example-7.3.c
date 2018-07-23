/* example-7.3 */
#include <stdio.h>

int main(void) {
	char st[6];

	st[0]='P';
	st[1]='a';
	st[2]='n';
	st[3]='d';
	st[4]='a';
	st[5]='\0';

	printf ("%s\n",st);

	st[3]='\0';
	printf ("%s\n",st);

	st[0]='\0';
	printf ("%s\n",st);

	return 0;
}
