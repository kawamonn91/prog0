#include <stdio.h>
int main(void) {
  int i=0,j=0;
  int num;
  char henkan[16] = "0123456789ABCDEF";
  char answer[10];

  printf("整数を入れてください:");
  scanf("%d",&num);

  while(num > 0) {
    // 入力した数値を16で割り、その余りと商をだす
    j = num % 16;
    num = num / 16;
    answer[i] = henkan[j];
    i++;
  }
  i--;

  printf("この整数を16進法に変換すると");

  for(j=i; j>=0; j--) {
    printf("%c",answer[j]);
  }
  printf("\n");
  return 0;
}
