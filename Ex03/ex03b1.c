#include <stdio.h>
int main()
{
  double a,b,S;
  printf("三角形の底辺の長さと高さをcmで入力してください：");
  scanf("%lf %lf",&a,&b);
  S = (a * b) /2;
  printf("三角形の面積は %lf 平方cmです\n",S);
  return 0;
}
