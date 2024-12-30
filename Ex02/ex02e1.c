#include <stdio.h>
int main()
{
  int a1,d,n,ax,sum;
  printf("Enter a1 d n _>");
  scanf("%d %d %d",&a1,&d,&n);
  ax = a1+d*(n-1);
  sum = n*(2*a1+(n-1)*d)/2;
  printf("an=%d\nSn=%d\n",ax,sum);
  return 0;
    }
