#include <stdio.h>
int main()
{
  int input[100],odd[100],even[100];
  int i,j=1,k=1,n;
  for(i=1;i<=100;i++)
    {
      scanf("%d",&input[i]);
      if(input[i]==0) break;
    }
  for(i=1;i<=100;i++)
    {
      if (input[i]==0) break;
      if(input[i]%2!=0)
	{
	 odd[j]=input[i];
	 j++;
	 odd[j]=0;
	}
      if(input[i]%2==0)
	{
	  even[k]=input[i];
	  k++;
	  even[k]=0;
	}
    }
  printf("Input:");
  for(i=1;i<=100;i++)
    {
      if(input[i]==0) break;
      printf("%d ",input[i]);
    }
  printf("\nOdd:");
  for(j=1;j<=100;j++)
    {
      if(odd[j]==0) break;
      printf("%d ",odd[j]);
    }
  printf("\nEven:");
  for(k=1;k<=100;k++)
    {
      if(even[k]==0) break;
      printf("%d ",even[k]);
    }
  printf("\n");
  return 0;
}
     
      
	  
