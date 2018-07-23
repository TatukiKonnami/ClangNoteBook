/* example-9.5 */
#include <stdio.h>
#include <string.h>

void reverse(char *w);

int main(void) {
	char word[100];

	printf ("文字列を入れてください ");
	gets(word);
	reverse(word);
	puts(word);

	return 0;
}
void reverse(char *w) {
	int n,i,j;
	char t;

	n=strlen(w); /* 文字列の長さ */
	if(n<=1) return;

	i=0; j=n-1;
	while(i<j) {
		t=w[i]; w[i]=w[j]; w[j]=t; /* w[i]とw[j]の交換 */
		i++; j--;
	}
}
