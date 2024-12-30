#include <stdio.h>
int main()
{
  int a,i,data[7];
  printf("7人分の評点を入力して下さい。\n");
  for(i=1;i<=7;i++)
    {
      scanf("%d",&a);
      data[i]=a;
    }
  for(i=1;i<=7;i++)
    {
      printf("%d:%4d     ",i,data[i]);
      if(data[i]>=80)
	printf("A\n");
      else if(data[i]>=60&&data[i]<80)
	printf("B\n");
      else if(data[i]>=50&&data[i]<65)
	printf("C\n");
      else if(data[i]>=35&&data[i]<50)
	printf("D\n");
      else if(data[i]<35)
	printf("F\n");
    }
  return 0;
}
    
      
      
	
