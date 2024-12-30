#include <stdio.h>
int main()
{
  int m=0,i,mn[11];
  for(i=0;i<=10;i++)
    {
      mn[i]=m;
      printf("%d:%d\n",i,mn[i]);
      m=2*m+1;
    }
  return 0;
}
  
