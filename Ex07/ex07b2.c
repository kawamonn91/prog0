#include<stdio.h>
int main()
{
  int max=0,min,i;
  int a[8];
  printf("8個の整数を空白で区切って入力して下さい\n");
  for(i=1;i<=8;i++)
    {
      scanf("%d",&a[i]);
    }
  for(i=1;i<=8;i++)
    {
      if(a[i]>max)
	{
	  max=a[i];
	}
	  
    }
  min=a[8];
  for(i=1;i<=8;i++)
    {
      if(a[i]<min)
	{
	min=a[i];
	}
    }
  printf("最大値は%dです。\n最小値は%dです。\n",max,min);
  printf("入力された整数の表示\n");
  for(i=1;i<=8;i++)
    {
      printf("%d ",a[i]);
    }
  return 0;
}
    
  
      
      
     
      
      
      
      
