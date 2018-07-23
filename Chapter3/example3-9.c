#include<stdio.h>
int main(void)
{
    double x,y;
    printf("実数を入れてください");
    scanf("%lf",&x);
    y=x*x;
    printf("2乗は%f\n",y);
    return 0;
}
