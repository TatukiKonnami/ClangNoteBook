/* example-7.6 */
#include <stdio.h>

int main(void) {
	char st[80];

	printf ("文字列を入れてください ");
	gets(st);
	printf ("%s\n",st);

	return 0;
}
