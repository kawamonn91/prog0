#include <stdio.h>
#define NUM 200
int is_Prime(int);
int main()
{
    int kisu[4],a=5,k=0;
    while(1){
        k=0;
        if(a+6>NUM) break;
        for(int i=0;i<4;i++){
            kisu[i]=a;
            a=a+2;
            }
        //printf("%d,%d,%d,%d\n",kisu[0],kisu[1],kisu[2],kisu[3]);
        a=a-6;
        
        for(int i=0;i<4;i++){
            if (is_Prime(kisu[i])==1) k++;
            }
        if (k==3){
            printf("三つ子素数{");
            for(int i=0;i<4;i++){
                if(is_Prime(kisu[i])==1) {
                    printf("%4d,",kisu[i]);
                    }
                }
            printf("}\n");
            }
        
        if(k!=3) continue;
        }
    return 0;
 }
    
int is_Prime(int n){
    for(int i=2;i<=n;i++){
       if(i==n)return 1;
        if(n%i==0) return 0;
    }
    return 0;
}
