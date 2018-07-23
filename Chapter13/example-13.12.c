/* example-13.12 */
#include <stdio.h>

int count;
char x[10],alphabet[10]={'A','B','C','D','E','F','G','H','I','J'};

void array(int n,int level);

int main(void) {
	int n;

	printf("全部で何文字並べますか ");
	scanf("%d",&n);

	if(n>6) {
		printf("非常に時間がかかります\n");
		return 1;
	}
	count=0;
	array(n,0);
	return 0;
}

void array(int n,int level) {
	int i;

	if(level>=n) { /* n 個並んだら表示してリターン */
		count++;
		for(i=0;i<n;i++) {
			printf("%c ",x[i]);
		}
		printf(" %d\n",count);
		return;
	}

	for(i=0;i<n;i++) { /* 要素を順に取り出す */
		x[level]=alphabet[i]; /* 要素の決定 */
		array(n,level+1); /* 再帰的呼び出し */
	}
}
