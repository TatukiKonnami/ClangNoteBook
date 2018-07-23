/* example-13.13 */
#include <stdio.h>

int main(void) {
	unsigned char z,a,b,c;

	z=188;
	printf("符号なし８ビット整数 %3d (%02X) の\n",z,z);
	a=z & 0x0F;
	printf("上位４ビットを０にすると %3d （%02X）\n",a,a);
	b=z & 0xF0;
	printf("下位４ビットを０にすると %3d （%02X）\n",b,b);
	c=~z;
	printf("全ビットを反転すると %3d （%02X）\n",c,c);
	return 0;
}
