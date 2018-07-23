/* example-13.8 */
#include <stdio.h>

int main(void) {
	int x[20]={51,4,8,41,59,6,65,9,5,62,78,93,23,84,3,63,33,7,2,40},i,j,m,n,t;

	n=20;
	printf("ソート前\n");
	for(i=0;i<n;i++) {
		printf("%d ",x[i]);
	}

	for(i=0;i<=n-2;i++) {
		m=i;
		for(j=i+1;j<=n-1;j++) {
			if(x[j]<x[m]) {
				m=j;
			}
		}
		t=x[i]; x[i]=x[m]; x[m]=t;
	}

	printf("\n ソート後\n");
	for(i=0;i<n;i++) {
		printf("%d ",x[i]);
	}
	printf("\n");
	return 0;
}
