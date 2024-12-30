
#include <stdio.h>
int main()
{
  int a,i;
  printf("階乗を計算したい数を入力してください：");
  scanf("%d",&a);
  if(a>12)printf("計算できません\n");
  for(i=a-1;i<12;i--)
    {
      if(a==0)
	{
	  printf("1\n");
      break;
	}
    a=a*i;
    if(i!=1) continue;
    printf("%d\n",a);
    if(i==1)break;
    }
 return 0;
}
    
    
