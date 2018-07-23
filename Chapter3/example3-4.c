#include<stdio.h>
int main(void){
    int a,b,wa,sa,seki,sho,amari;
    a=120;
    b=27;
    wa=a+b;
    sa=a-b;
    seki=a*b;
    sho = a/b;
    amari=a%b;
    printf("%d %d %d %d %d\n",wa,sa,seki,sho,amari);
    return 0;
}