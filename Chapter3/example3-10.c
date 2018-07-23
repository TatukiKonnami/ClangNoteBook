#include<stdio.h>
int main(void){
    double zen,kaku;
    int min;
    printf("全部でなんkgありますか？");
    scanf("%lf",&zen);
    printf("何人で分けますか？");
    scanf("%d",&min);
    kaku=zen/min;
    printf("1人あたり%lfkgです\n", kaku);
    return 0;
}