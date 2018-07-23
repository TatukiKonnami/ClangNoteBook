/* example-4.6 */
#include <stdio.h>
int main(void) {
	int n;

	printf ("1 : 0 ～ 5 歳\n");
	printf ("2 : 6 ～ 18 歳\n");
	printf ("3 : 19 歳以上\n");
	printf ("番号を選んでください -> ");
	scanf ("%d",&n);

	switch(n) {
		case 1: printf ("小人 100 円です\n");
			break;
		case 2: printf ("中人 200 円です\n");
			break;
		case 3: printf ("大人 300 円です\n");
			break;
		default : printf ("番号が違います，やり直してください\n");
	}
	return 0;
}
