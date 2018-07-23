/* example-8.3 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char st[100];
	int i,n;

	printf ("文字列を入れてください ");
	gets(st);

	n=strlen(st);
	for(i=0;i<n;i++) st[i]=toupper(st[i]);
	printf ("すべて大文字で表示：%s\n",st);

	for(i=0;i<n;i++) st[i]=tolower(st[i]);
	printf ("すべて小文字で表示：%s\n",st);

	return 0;
}
