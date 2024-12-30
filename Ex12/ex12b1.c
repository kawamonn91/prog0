#include <stdio.h>
void d2b(int a);
int main()
{
    while(1){
    int a;
    printf("10進数を入力してください：");
    scanf("%d",&a);
    if(a<0) break;
    else if(a>=0&&a<=255) d2b(a);
    else printf("256以上の値が入力されました\n");
    }
    return 0;
}


void d2b(int a){
    int row[8];
    int k=0;
    while(1){
        if(a<1) break;
        row[k]=a%2;
        if(a%2==1) a=a-1;
        a=a/2;
        k++;
    }
    for(int i=k;k<9;k++){
        row[k]=0;
    }

    for(int i=7;i>=0;i--){
        printf("%d",row[i]);
    }
    printf("\n");
}