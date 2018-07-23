/* example-4.5 */
#include <stdio.h>
int main(void) {
	int age;

	printf ("何歳ですか? ");
	scanf ("%d",&age);

	if (age>=6 && age<=64) {
		printf ("100 円です\n");
	}
	else {
		printf ("無料です\n");
	}
	return 0;
}
