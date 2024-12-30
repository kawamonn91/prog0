#include <stdio.h>
//round_toを定義
  double round_to(double a,int n){
    for(int i=1;i<=n+1;i++){
        a=a*10;
    }
    a=a+5;
    a=a/10;
    int b=a;
    a=b;
    for(int i=1;i<=n;i++){
        a=a/10;
    }
    return a;
}


int main(){
  double a;
  int n=0;
  printf("正の実数値を入力して下さい：");
  scanf("%lf",&a);
  printf("\n小数点以下の桁数を入力してください：");
  scanf("%d",&n);
  a=round_to(a,n);
  printf("\n%f\n",a);
  return 0;
}