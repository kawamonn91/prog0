#include <stdio.h>
#define EPS 1.0e-10

double fib(int n);
int main()
{   
    //printf("数列を格納するための行列を宣言\n");
    int i=0,k=0;
    double row[100];
    int n=0;
    //printf("関数で作成した行列を出力してrowに格納\n");
    for(i=0;i<100;i++){
        row[i]=fib(n);
        n++;
    }
    //printf("f0~f9まで出力\n");
    for(int i=0;i<=9;i++){
        printf("F(%d)=%g ",k,row[i]);
        k++;
    }
    k=10;
    printf("\n");
    //printf("フィボナッチ数列の出力\n");
    for(int i=10;i<31;i++){
    printf("%d  %.12e  %.12e\n",k,row[i+1]/row[i],row[i+1]/row[i]-1.618033988749895);
    k++;
    }
    printf("\n");
    return 0;
}

double fib(int n){
    double f,f1=0,f2=1,f3,fib[100];
    int x=n;
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<100;i++){
        f3=f1+f2;
        fib[i]=f3;
        f1=f2;
        f2=f3;
        }
    return fib[x];
}