/* example-4.1 */
#include <stdio.h>
int main(void) {
	int age;

	printf ("何歳ですか? ");
	scanf ("%d",&age);

	if (age<20) {
		printf ("未成年です\n");
	}
	else {
		printf ("大人です\n");
	}
	return 0;
}
