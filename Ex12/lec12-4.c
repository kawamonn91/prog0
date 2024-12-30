/*****************************************
 * lec12-4.c
 *
 * ある数のある桁の数を計算する
 *
 *****************************************/
#include <stdio.h>

int get_1_digit(int, int);

int main()
{
  int i, j = 3, result;

  scanf("%d",&i);
  result = get_1_digit(i, j);
  printf("%d の %d 桁目は %d です\n",i,j,result);
  return 0;
}

int get_1_digit(int x, int pos)
{
  int i, j;
  
  for(i = 1 ; i < pos ; i++){  /* (桁数-1)回のループ */
    x /= 10;
  }
  j = x % 10;  /* 下一桁の取り出し */
  return j;
}
