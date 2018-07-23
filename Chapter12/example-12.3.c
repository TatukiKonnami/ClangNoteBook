/* example-12.3 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int x,a,count;

	srand((unsigned int)time(NULL));
	printf ("Ｘは0〜999の数です．\n");
	x=rand()%1000;

	count=0;
	while(1) {
		count++;
		printf ("%d回目：いくつ？ ",count);

		scanf ("%d",&a);
		if (a==x) {
			break;
		}

		if (a>x) {
			printf (" もっと小さいです\n");
		}
		else {
			printf (" もっと大きいです\n");
		}
	}
	printf (" 当りました！\n");
	return 0;
}
