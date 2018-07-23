/* example-4.4 */
#include <stdio.h>
int main(void) {
	int age,fee;

	printf ("何歳ですか? ");
	scanf ("%d",&age);

	if (age<6) {
		printf ("小人 ");
		fee=100;
	}
	else {
		if (age<18) {
			printf ("中人 ");
			fee=200;
		}
		else {
			printf ("大人 ");
			fee=300;
		}
	}

	printf ("%d 円\n",fee);
	return 0;
}
