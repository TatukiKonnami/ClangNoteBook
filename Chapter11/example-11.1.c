/* example-11.1 */
#include <stdio.h>
#include <string.h>

int main(void) {
	struct person {
		int number;
		char name[20];
		int age;
	} a,b;

	a.number=2135;
	a.age=19;
	strcpy(a.name,"George");

	printf ("%s %d %d\n",a.name,a.number,a.age);
	b=a;
	printf ("%s %d %d\n",b.name,b.number,b.age);
	return 0;
}
