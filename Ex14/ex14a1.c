#include <stdio.h>
double bmi_hantei (double x);
int wariai(double ,double );
int main()
{
    int m,n,k=0,hantei[12];
    double tall,weight,bmi,bmi_list[12];
    printf("身長(cm)と体重(kg)を空白で区切って入力して下さい。\n");
    printf("入力可能な最大の人数は12人です。\n");

    //printf("数値の読み込み\n");
    while(1){
        scanf("%lf %lf",&tall,&weight);
        //feofはファイルの終端に達したか確認する関数
        //stdinは標準入力(キーボードからの入力)を示す
        //ctrl + d が入力されると終端が示され、真を返す
        if(feof(stdin)) break;
        bmi=weight/((tall*tall)/10000);
        hantei[k]=bmi_hantei(bmi);
        bmi_list[k]=bmi;
        k++;
        if(k==12) break;
         }
    printf("\tBMI \t肥満度部類\n");
    for(int i=0;i<k;i++){
        printf("%d人目 \t%.2f",i+1,bmi_list[i]);
        m++;
        if(hantei[i]==-1)printf("\t低体重\n");
        if(hantei[i]==0) {printf("\t普通体重\n"); n++;}
        if(hantei[i]==1) printf("\t肥満(1度)\n");
        if(hantei[i]==2) printf("\t肥満(2度)\n");
        if(hantei[i]==3) printf("\t肥満(3度)\n");
        if(hantei[i]==4) printf("\t肥満(4度)\n");
    }
    printf("肥満度分類が普通体重である人の割合は %d パーセントです。\n",wariai(m,n));
    return 0;
}


double bmi_hantei(double x)
{
    double bmi;
    bmi=x;
    if(bmi<18.5) return -1;
    if(bmi>=18.5&&bmi<25) return 0;
    if(bmi>=25&&bmi<30) return 1;
    if(bmi>=30&&bmi<35) return 2;
    if(bmi>=35&&bmi<40) return 3;
    if(bmi>=40) return 4;

}

int wariai(double m,double n)
{
    double a;
    a=n/m;
    a=a*1000+5;
    a=a/10;
    int b=a;
    return b;
}