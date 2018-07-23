/* example-13.4 */
#include <stdio.h>

int main(void)
{
	FILE *f;
	int i,x,max,imax,min,imin;

	if((f=fopen("data13_4.txt","r"))==NULL)
	{
		printf("オープンできません\n");
		return 9;
	}

	i=0;
	max=-9999;
	min=9999;

	while(fscanf(f,"%d",&x)!=EOF)
	{
		if(x>max)
		{
			max=x;
			imax=i;
		}

		if(x<min)
		{
			min=x;
			imin=i;
		}

		i++;
	}

	fclose(f);

	printf("最大値 ： %d\n",max);
	printf("最大の位置 ： %d\n",imax);
	printf("最小値 ： %d\n",min);
	printf("最小の位置 ： %d\n",imin);
	return 0;
}
