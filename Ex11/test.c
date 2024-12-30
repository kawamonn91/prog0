
//sectimeを宣言
int sectime(int a,int b,int c){
    int t = a*60*60 +b*60 +c;
    return t;
}
#include <stdio.h>
int main(){
    int a,b,c,t,t1,t2;
    printf("時刻1の時,分,秒を整数値で入力してください：");
    scanf("%d %d %d",&a,&b,&c);
    t1=sectime(a,b,c);
    printf("時刻2の時,分,秒を整数値で入力してください：");
    scanf("%d %d %d",&a,&b,&c);
    t2=sectime(a,b,c);
    printf("時刻1は0時0分0秒から数えて %d 秒\n",t1);
    printf("時刻2は0時0分0秒から数えて %d 秒\n",t2);
    t=t2-t1;
    a=t/3600;
    b=(t%3600)/60;
    c=(t%3600)%60;
    printf("時刻1と時刻②の時間差は%d時間%d分%d秒です\n",a,b,c);
    return 0;

}

  
