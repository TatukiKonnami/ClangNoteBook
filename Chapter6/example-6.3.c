/* example-6.3 */
#include <stdio.h>

int main(void) {
	int x[4][3],i,j,sum;

	/* データ入力 */
	for(i=0;i<=3;i++) {
		for(j=0;j<=2;j++) {
			printf ("%2d 行%2d 列のデータ ",i,j);
			scanf ("%d",&x[i][j]);
		}
	}

	/* 行列表示 */
	for(i=0;i<=3;i++) {
		for(j=0;j<=2;j++) printf ("%4d",x[i][j]);
		printf ("\n");
	}
	return 0;
}
