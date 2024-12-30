#include<stdio.h>
int main(void)
{
  int i=0,j=0;
  int num;
  char syuturyoku[16] = "0123456789ABCDEF";
  char nyuuryoku[10];
  printf("10進数を入力してください：");
  scanf("%d",&num);
  printf("%d",num);
  while(num > 0){
    j = num % 16;
    num = num / 16;
    nyuuryoku[i] = syuturyoku[j];
    i++;
  }
  i--;
  printf("を16進数に変換すると");
  for(j=i; j>=0; j--) {
    printf("%c",nyuuryoku[j]);
  }
  printf("\n");
  return 0;
}
  
      
  
  
