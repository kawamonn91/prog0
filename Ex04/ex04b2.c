#include<stdio.h>
int main()
{
  int y,m,d,mod;
  printf("年月日をそれぞれスペースで分けて入力してください");
  scanf("%d %d %d",&y,&m,&d);
  mod = (y + (y/4)-(y/100)+(y/400)+(13*m+8)/5+d)%7;
  switch(mod){
  case 1:
    printf("月曜日\n");
    break;
  case 2:
    printf("火曜日\n");
    break;
  case 3:
    printf("水曜日\n");
    break;
  case 4:
    printf("木曜日\n");
    break;
  case 5:
    printf("金曜日\n");
    break;
  case 6:
    printf("土曜日\n");
    break;
  case 0:
    printf("日曜日\n");
    break;
  }
  return 0;
}
    
    
