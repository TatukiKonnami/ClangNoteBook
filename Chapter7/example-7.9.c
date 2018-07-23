/* example-7.9 */
#include <stdio.h>

int main(void) {
	char st[100];
	int i,d;

	d='a'-'A';
	printf ("文字列を入れてください ");
	gets(st);

	i=0;
	while(st[i]!='\0') {
		if (st[i]>='A' && st[i]<='Z') st[i]+=d;
		i++;
	}
	puts(st);

	return 0;
}
