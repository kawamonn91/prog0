#include<stdio.h>
int main()
{
  double m,p,e,avg;
  printf("数学と物理と英語の点数をスペースで分けて入力してください\n");
  scanf("%lg %lg %lg",&m,&p,&e);
  avg =(m+p+e)/3;
  printf("3科目の平均点は、%g 点です。\n成績は",avg);
  if(avg>=80) printf("優");
  else if(60<=avg && avg<80) printf("良");
  else if(40<=avg && avg<60) printf("可");
  else if(avg<40)printf("不可");
  printf("です。\n");
  return 0;
}
  
  
