#include<stdio.h>
int main(void){
    int a;
    a=100;
    printf("10進数の%dは16進数で表すと%X\n",a,a);
    a=0xABCD;
    printf("16進数の%Xは10進数で表すと%d\n",a,a);
    a= -3;
    printf("10進数の%dは16進数で表すと%X\n",a,a);
    return 0;
}