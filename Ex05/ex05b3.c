#include<stdio.h>
int main()
{
  int m,n,r=1;
  printf("m nを入力して下さい：");  
  scanf("%d %d",&m,&n);
  while(r!=0){
    r=m % n;
    printf("%d%%%d = %d\n",m,n,r);
    m=n;
    if(r!=0)n=r;
    /*r = m%n;*/
  }
  printf("最大公約数は %d です\n",n);
  return 0;
}
    
    
