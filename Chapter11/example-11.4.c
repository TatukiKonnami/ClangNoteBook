/* example-11.4 */
#include <stdio.h>
#include <time.h>

int main(void) {
	time_t second;
	struct tm z;

	second=time(NULL);
	z=*localtime(&second);

	printf ("年 %d\n",z.tm_year+1900);
	printf ("月 %d\n",z.tm_mon+1);
	printf ("日 %d\n",z.tm_mday);
	printf ("曜日 %d\n",z.tm_wday);
	printf ("時 %d\n",z.tm_hour);
	printf ("分 %d\n",z.tm_min);
	printf ("秒 %d\n",z.tm_sec);
	return 0;
}
