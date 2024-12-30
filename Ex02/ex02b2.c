#include <stdio.h>
int main()
{
  int a,b,c,V,S;
  printf("縦の長さを整数値で入力しなさい ");
  scanf("%d",&a);
  printf("横の長さを整数値で入力しなさい ");
  scanf("%d",&b);
  printf("高さを整数値で入力しなさい ");
  scanf("%d",&c);
  V=a*b*c;
  S=2*(a*b+b*c+a*c);
  printf("体積：%d\n表面積：%d\n",V,S);
  return 0;
}
