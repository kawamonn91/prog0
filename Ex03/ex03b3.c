#include <stdio.h>
int main()
{
  int a,b,c,d;
  printf("商品代金（税抜き）を入力してください：");
  scanf("%d",&a);
  b = (a/100)*8;
  c = a+b;
  d = a/10;
  printf("消費税は %d 円、お支払い額 %d 円です\n",b,c);
  printf("%d ポイントつきました！\n",d);
  return 0;
}
    
