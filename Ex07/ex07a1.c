#include <stdio.h>
int main()
{
  int i,array[15]={1,7,10,18,27,31,42,49,54,50,61,67,72,88,93};
  printf("添字を入力してください：");
  scanf("%d",&i);
  if(i>=1&&i<=14)
    {
  printf("array[%d]=%d\n",i,array[i]);
  if(array[i]%3==0)
    {
      printf("3の倍数です\n");
    }
  else
    {
      printf("3の倍数ではありません\n");
    }
    }
  else printf("範囲外です!\n");
  return 0;
}
