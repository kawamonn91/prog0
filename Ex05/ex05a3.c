#include<stdio.h>
int main(){
  int n,r,count = 0;
  printf("初期値の入力：");
  scanf("%d",&n);
  while (1){
    count++;
    r=n%2;
    n/=2;
    printf("%d回目ループ　商%d  余り%d \n",count,n,r);
    if(n==0)break;
    
  }
  return 0;
}
    
      