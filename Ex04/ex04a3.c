#include<stdio.h>
int main()
{
  int id,han;
  printf("学籍番号の下三桁を入力して下さい(例：001)");
  scanf("%d",&id);
  han=id%5;
  switch(han){
  case 1:
    printf("この人はA班です\n");
    break;
  case 2:
    printf("この人はB班です\n");
    break;
  case 3:
    printf("この人はC班です\n");
    break;
  case 4:
    printf("この人はD班です\n");
    break;
  case 0:
    printf("この人はE班です\n");
    break;
  }
  return 0;
}