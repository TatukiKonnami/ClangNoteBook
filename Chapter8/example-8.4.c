/* example-8.4 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	int i,n,r;
	char w1[30],w2[30];

	printf("1 つめの英単語を入れて ");
	gets(w1);

	printf("2 つめの英単語を入れて ");
	gets(w2);

	i=0;
	while(w1[i]!='\0') {
		w1[i]=tolower(w1[i]);
		i++;
	}

	i=0;
	while(w2[i]!='\0') {
		w2[i]=tolower(w2[i]);
		i++;
	}

	r=strcmp(w1,w2);
	if(r<0) printf("辞書では %s が %s より前にあります\n",w1,w2);
	else if(r>0) printf("辞書では %s が %s より前にあります\n",w2,w1);
	else printf("同じ単語です\n");

	return 0;
}
