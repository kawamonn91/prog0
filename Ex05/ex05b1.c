#include <stdio.h>
int main()
{
  int n;

  printf("0ではない自然数nを入力して下さい　");
  scanf("%d",&n);

  while(n!=1){
    if (n%2==0) n=n/2;
    else if(n%2==1) n=3*n+1;
    printf("n = %d\n",n);
  }
  printf("終了\n");
  return 0;
}
  
