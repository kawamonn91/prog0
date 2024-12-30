#include <stdio.h>
double function(double a,double b);
int main()
{
    double a,b;

    printf("係数aとbの値を入力して下さい：");
    scanf("%lf %lf",&a,&b);
    printf("関数の値は以下の通りです。\n");
    function(a,b);
    return 0;
}

double function(double a,double b)
{
    for(double i=1;i<=4;i++){
        printf("x = %g のとき y = %g\n",i,a*i+b);
    }   

}