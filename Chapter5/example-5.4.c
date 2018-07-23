/* example-5.4 */
#include <stdio.h>
int main(void) {
	int m;
	do {
		printf("1 2 3 のどれかを入力してください ");
		scanf("%d",&m);
	} while(m<1 || m>3);

	switch(m) {
		case 1 : printf("Solo\n");
				break;
		case 2 : printf("Duo\n");
				break;
		case 3 : printf("Trio\n");
	}
	return 0;
}
