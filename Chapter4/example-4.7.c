/* example-4.7 */
#include <stdio.h>
int main(void) {
	int month;

	printf ("何月ですか ");
	scanf ("%d",&month);

	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: printf ("31 日です\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11: printf ("30 日です\n");
			break;
		case 2: printf ("28 日です\n");
		printf ("(閏年は29 日)\n");
			break;
		default : printf ("1～12 の数を入れてください\n");
	}
	return 0;
}
