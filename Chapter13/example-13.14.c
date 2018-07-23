/* example-13.14 */
#include <stdio.h>

int main(void) {
	unsigned char a,sleft,sright;
	int i;

	a=20;
	printf("8 ビット符号なし整数 %3d をシフトすると\n",a);
	printf("ビット 左 右\n",a);
	for(i=1;i<8;i++) {
		sleft=a<<i;
		sright=a>>i;
		printf(" %1d %3d %3d\n",i,sleft,sright);
	}
	return 0;;
}
