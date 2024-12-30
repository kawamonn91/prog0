#include <stdio.h>
int main()
{
  int ashi_total;
  printf("足の合計本数を入力して下さい");
  scanf("%d",&ashi_total);
  int k,t,b;

  int found=0;

  for (t=0;t<=20;t++)
    {
      for(k=0;k<=20-t;k++)
	{
	  b=20-t-k;
	  if(2*t+4*k+6*b==ashi_total)
	    {
	      printf("鶴：%d,亀：%d,テントウムシ：%d\n",t,k,b);
	      found=1;
	    }
	}
    }
      if(!found)
	{
	  printf("NOT found!");
	}

      return 0;
}
	
	
       


	  
  
