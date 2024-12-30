#include <stdio.h>
int to_hex(int m,int n);
int main()
{
    int m,n=0;
    char answer[8];
    printf("10進数を入力して下さい：");
    scanf("%d",&m);
    if(n>=0){
        for(int i=0;i<8;i++){
    answer[i]=to_hex(m,n);
    n++;
        }
    printf("%dの16進数は",m);
    for(int i=7;i>=0;i--){
        printf("%c",answer[i]);
    }
    printf("です\n");
    }
    else printf("負の値が入力されました\n");
    return 0;
}

int to_hex(int m,int n){
    int x=m,k=0,y,l=n;
    char a='a',b='b',c='c',d='d',e='e',f='f',h[8];
    while(1){
        y=x%16;
        switch(y){
            case 10:
            h[k]=a;
            break;

            case 11:
            h[k]=b;
            break;

            case 12:
            h[k]=c;
            break;

            case 13:
            h[k]=d;
            break;

            case 14:
            h[k]=e;
            break;

            case 15:
            h[k]=f;
            break;


            default :
            h[k]=y;
        }
        x=(x-y)/16;
        k++;
        if(x==0) break;
    }
    return h[l];
}