#include <stdio.h>
int main()
{
    double x,s1,c,y,t;
    int n,nmax;

    printf("何項計算しますか？：");
    scanf("%d",&nmax);
    s1=0.0;
    c=0.0;
    //printf("カハンの加算アルゴリズム");
    for(n=1;n<=nmax;n++){
        x=(double)n;
        y=1.0/(x*x)-c;
        t=s1+y;
        c=(t-s1)-y;
        s1=t;
    }
    printf("1/n^2の総和：%.14f\n",s1);
    return 0;
}