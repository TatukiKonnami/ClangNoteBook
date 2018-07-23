/* example-13.9 */
#include <stdio.h>

int main(void) {
	int i,s,n,x[200];
	FILE *f;

	if((f=fopen("data13_9.txt","r"))==NULL) {
		printf("ファイルが開けません\n ");
		return 9;
	}

	n=0;
	while(fscanf(f,"%d",&x[n])!=EOF) {
		n++;
	}
	fclose(f);

	printf("探す数 ? ");
	scanf("%d",&s);

	for(i=0;i<n;i++) {
		if(x[i]==s) {
			break;
		}
	}

	if(i<n) {
		printf("%d 番で見つかりました\n",i);
	}
	else {
		printf("見つかりませんでした\n");
	}
	return 0;
}
