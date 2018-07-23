/* example-11.2 */
#include <stdio.h>
#include <string.h>

struct person {
	int number;
	char name[20];
	int age;
};

int main(void) {
	struct person a,b;

	a.number=2135;
	a.age=19;
	strcpy(a.name,"George");

	printf ("%s %d %d\n",a.name,a.number,a.age);
	b=a;
	printf ("%s %d %d\n",b.name,b.number,b.age);
	return 0;
}
