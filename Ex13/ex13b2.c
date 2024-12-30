#include<stdio.h>
#include<math.h>

double x1 = -2691367.32673266;
double x2 = -3.6787955329121653e-9;
double solve_quadratic(double a, double b, double c, int sel);


int main(){
    double a=1.01,b=2718281,c=0.01;
    double solve1=solve_quadratic(a,b,c,0);
    double solve2=solve_quadratic(a,b,c,1);

    double relative_error1=fabs(x1-solve1)/fabs(x1);
    double relative_error2=fabs(x2-solve2)/fabs(x2);
    printf("数値解1=%.14e\n数値解2=%.14e\n",solve1,solve2);

    printf("x1との相対誤差は%.14eです\n",relative_error1);
    printf("x2との相対誤差は%.14eです\n",relative_error2);

    return 0;
}

double solve_quadratic(double a, double b, double c, int sel)
{
    double d=sqrt(b*b-4*a*c);
    if(sel==1) return ((-b+d)/(2*a));
    else return ((-b-d)/(2*a));
}

//コンパイル時はオプションで-lmをコマンドに追加