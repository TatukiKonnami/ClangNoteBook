/* example-7.8 */
#include <stdio.h>

int main(void) {
	char word[100];
	int i;

	printf ("文字列を入れてください ");
	gets(word);

	i=0;
	while(word[i]!='\0') i++;

	while(i>0) {
		i--;
		putchar(word[i]);
	}
	putchar('\n');

	return 0;
}
