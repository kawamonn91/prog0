#include <stdio.h>
int main()
{
  int n,d=0;

  printf("0ではない自然数nを入力して下さい　");
  scanf("%d",&n);

  while(n!=1){
    d ++;
    if (n%2==0){ n=n/2;
      printf("%d回目は偶数\n",d);
      printf("次の n = %d\n",n);
    }
    else if(n%2==1){ n=3*n+1;
      printf("%d回目は奇数\n",d);
      printf("次の　n = %d\n",n);
    }
  }
  printf("%d回目でn = 1 になりました\n",d);
  return 0;
}
  
