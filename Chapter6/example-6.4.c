/* example-6.4 */
#include <stdio.h>

int main(void) {
	int p[3][5]={{72,58,69,94,78},{39,80,84,66,54},{97,88,54,81,36}},i,j;
	double av,sum;

	for(i=0;i<3;i++) {
		printf("第%d グループ得点 ： ",i+1);
		sum=0.0;

		for(j=0;j<5;j++) {
			printf("%3d",p[i][j]);
			sum+=p[i][j];
		}

		av=sum/5;
		printf(" : 平均=%6.2f\n",av);
	}
	return 0;
}
