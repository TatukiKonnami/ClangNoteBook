#include<stdio.h>
int main(void){
    double r,taiseki;
    printf("半径は？");
    scanf("%lf",&r);
    taiseki=r*r*r*3.14159*4/3;
    printf("体積は%10.4f",taiseki);
    return 0;
}