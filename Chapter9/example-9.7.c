/* example-9.7 */
#include <stdio.h>

int main(int argc, char *argv[ ]) {
	if (argc!=3) {
		printf ("引数が２つ必要です\n");
		return 9;
	}

	printf ("コマンド名 :%s\n",argv[0]);
	printf ("第１引数 :%s\n",argv[1]);
	printf ("第２引数 :%s\n",argv[2]);

	return 0;
}
