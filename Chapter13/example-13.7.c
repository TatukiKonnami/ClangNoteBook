/* example-13.7 */
#include <stdio.h>

int main(void) {
	int x[16]={53,21,34,31,25,129,12,80,28,98,7,24,92,51,54,5},count[11],i,d,n;

	n=16;
	for(i=0;i<=10;i++) {
		count[i]=0; /* カウンタのクリア */
	}

	for(i=0;i<=n-1;i++) {
		d=x[i]/10;
		if (d>10) {
			d=10; /* 100 以上の場合 */
		}
		count[d]++; /* カウント */
	}

	for(i=0;i<=9;i++) {
		printf ("%5d 台 :%2d\n",i*10,count[i]);
	}
	printf ("100 以上 :%2d\n",count[10]);
	return 0;
}
