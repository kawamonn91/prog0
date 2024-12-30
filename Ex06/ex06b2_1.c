#include<stdio.h>
int main()
{
  int b,c,n,r,a,i,j,k;
  printf("n個のものからr個をとる組み合わせを計算します。\nnとrを整数でスペースを開けて入力してください：");
  scanf("%d %d",&n,&r);
  a=n-r;
  b=n;
  c=r;
  if(n>12)printf("nが13以上のため計算できません\n");
  if((n-r)<1)printf("n-rが1未満のため計算できません\n");
  if(r>0){
  for(i=n-1;i<12;i--){
    n=n*i;
    if(i!=1)continue;
    if(i==1)break;
  }
  for(j=a-1;j<12;j--){
    a=a*j;
    if(j!=1)continue;
    if(j==1)break;
  }
  for(k=r-1;k<12;k--){
    if(k>1) r=r*k;
    if(k>1)continue;
    if(k<1)break;
  }
  int answer;
  answer=n/(a*r);
  printf("%dc%d=%d\n",b,c,answer);
  }
  else {
    printf("%dc%d=1\n",b,c);
  }
  return 0;
}
  
