#include <stdio.h>
int main()
{
  int event[10]={1602,1395,1215,1591,2000,645,1776,1415,1333};
  int i;
  for(i=0;i<=10;i++)
    {
      if(event[i]==0) break;
      printf("%d年は",event[i]);
      if(event[i]>=1185 && event[i]<=1333)
	printf("鎌倉時代です\n");
      else if(event[i]>=1336 && event[i]<=1573)
	printf("室町時代です\n");
      else if(event[i]>=1576 && event[i]<=1600)
	printf("安土桃山時代です\n");
      else if(event[i]>=1603 && event[i]<=1868)
	printf("江戸時代です\n");
      else
	printf("4つの時代以外です\n");
    }
  return 0;
}