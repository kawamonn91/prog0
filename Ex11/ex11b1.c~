#include <stdio.h>
//teaspoonを定義
int teaspoon(int n){
  for(int i=1;i<=n+1;i++){
    printf("%dさじ",i);
    if(i<n+1)printf("、");
  }
}
int main(){
  int n;
  while(1){
  printf("紅茶の杯数を入力して下さい：");
  scanf("%d",&n);
  if(n==0) {
    printf("またどうぞ\n");
    break;
  }
  teaspoon(n);
  printf("\nお湯を注ぐ・・・\nお茶をどうぞ!\n");
  }
}
