#include<stdio.h>
/*#include<math.h>*/
int main()
{
  double a,b,c,d,e,avg,total;
  printf("5人分の体重を空白で分けて入力してください\n");
  scanf("%lg %lg %lg %lg %lg",&a,&b,&c,&d,&e);
  total=(a+b+c+d+e);
  avg=(total)/5;
  
    
  printf("5人の体重の平均値：%.1f[kg]\n",avg);
  printf("1人目の体重：%g [kg]、平均からの偏差：%.1f [kg]\n",a,a-avg);
  printf("2人目の体重：%g [kg]、平均からの偏差：%.1f [kg]\n",b,b-avg);
  printf("3人目の体重：%g [kg] ,平均からの偏差：%.1f [kg]\n",c,c-avg);
  printf("4人目の体重：%g [kg]、平均からの偏差：%.1f [kg]\n",d,d-avg);
  printf("5人目の体重：%g [kg]、平均からの偏差：%.1f [kg]\n",e,e-avg);
  return 0;
}
