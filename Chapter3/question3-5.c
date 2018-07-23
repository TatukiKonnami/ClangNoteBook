#include<stdio.h>
int main(void){
    int a,b,ans;
    printf("aはいくつ？");
    scanf("%d",&a);
    printf("bはいくつ？");
    scanf("%d",&b);
    ans = a*b;
    printf("%d×%dは%dです", a,b,ans);
    return 0;
}