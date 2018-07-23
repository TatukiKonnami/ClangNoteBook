/* example-13.10 */
#include <stdio.h>

int main(void) {
	int n,p,hi,lo,mid,x[200];
	FILE *f;

	if((f=fopen("data13_10.txt","r"))==NULL) {
		printf("ファイルが開けません\n");
		return 9;
	}

	n=0;
	while(fscanf(f,"%d",&x[n])!=EOF) {
		n++;
	}
	fclose(f);

	printf("探す数? ");
	scanf("%d",&p);

	lo=0;
	hi=n-1;

	while(lo<=hi) {
		mid=(lo+hi)/2;
		if(p==x[mid]) {
			break;
		}
		if(p>x[mid]) {
			lo=mid+1;
		} else {
			hi=mid-1;
		}
	}

	if(lo<=hi) {
		printf("%d番目にありました\n",mid);
	}
	else {
		printf("見つかりませんでした\n");
	}
	return 0;
}
