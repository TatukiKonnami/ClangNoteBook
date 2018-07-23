/* example-8.2 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char st[100];
	int i,n,c_l,c_u,c_d;

	printf ("文字列を入れてください ");
	gets(st);
	n=strlen(st);
	c_l=c_u=c_d=0;

	for(i=0;i<n;i++) {
		if (islower(st[i])) c_l++;
		if (isupper(st[i])) c_u++;
		if (isdigit(st[i])) c_d++;
	}
	printf ("全文字数 %d 小文字 %d, 大文字 %d, 数字 %d\n",n,c_l,c_u,c_d);

	return 0;
}
