/* example-13.11 */
#include <stdio.h>

int fact(int n);

int main(void) {
	int y,x;

	printf("整数を入力してください ");
	scanf("%d",&x);
	if(x<0 || x>12) { /* int の範囲では12!まで */
		printf("それではできません\n");
		return 1;
	}

	y=fact(x);
	printf("%d の階乗は%d です．",x,y);
	return 0;
}

int fact(int n) {
	if(n<=1) {
		return 1; /* 1 以下なら1 で決定 */
	}
	return n*fact(n-1); /* 再帰的に自分を呼び出す */
}
