/* example-13.6 */
#include <stdio.h>

int main(void) {
	int used[10],i,x,count;

	for(i=0;i<=9;i++) {
		used[i]=0;
	}

	count=0;
	printf ("0〜9 から3 つ選んでください\n");
	while(count<3) {
		printf ("いくつ？ ");
		scanf ("%d",&x);
		if (x<0 || x>9) {
			printf("範囲は0〜9 です\n");
			continue;
		}
		if (used[x]==1) {
			printf("%d は既に選ばれています．\n",x);
			continue;
		}
		used[x]=1;
		count++;
	}

	printf ("選んだ数は ");
	for(i=0;i<=9;i++) {
		if (used[i]==1) {
			printf ("%d ",i);
		}
	}
	printf ("\n");
	return 0;
}
