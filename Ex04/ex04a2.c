#include <stdio.h>
int main()
{
  int a;
  printf("整数を入力してください　");
  scanf("%d",&a);
  if(a%2 == 0)printf("%dは偶数です\n",a);
  else if(a%2 >= 0) printf("%dは奇数です\n",a);
  return 0;
}
