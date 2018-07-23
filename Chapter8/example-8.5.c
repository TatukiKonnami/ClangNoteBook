/* example-8.5 */
#include <stdio.h>
#include <string.h>

int main(void) {
	char w1[30],w2[30],v[60]="",y[10];
	int i;

	printf("1 つめの単語を入れて ");
	gets(w1);

	printf("2 つめの単語を入れて ");
	gets(w2);

	printf("正順なら yes 逆順ならその他の文字を入れて ");
	gets(y);

	if(!strcmp(y,"yes")) {
		strcat(v,w1);
		strcat(v,w2);
	}
	else {
		strcat(v,w2);
		strcat(v,w1);
	}
	printf("連結した単語は %s \n",v);

	return 0;
}
