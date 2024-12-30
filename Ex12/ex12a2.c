#include <stdio.h>
int digits(int);
int get_1_digit(int, int);
int main()
{
    int a,n=0,s,j=1,k=1;
    printf("正の整数を入力して下さい：");
    scanf("%d",&a);
    //printf("\naの桁数を求てnに格納\n");
    n=digits(a);
    printf("%dの桁数は%dです\n", a, n);
    //printf("桁数とカンマ分の1行配列の作成\n");
    s=n+(n/3);
    //printf("s=%d\n",s);
    int row[s];
    //printf("配列に格納\n");
    for(int i=s-1;i>=0;i--){
        j++;
        if(j%4==0){
            row[i]=-1;
            }
        else {
            row[i]=get_1_digit(a,n);
            n--;
            }
    }
    //printf("rowを逆順表示\n");
    for(int i=s-1;i>=0;i--){
        if(row[i]<0)printf(",");
        else printf("%d",row[i]);
    }
    printf("\n");
    return 0;
}

int digits(int x)
{
  int keta = 1;

  while( x /= 10 ) {
    keta++;
  }
  return keta;
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