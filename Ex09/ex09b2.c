#include <stdio.h>
#define SIZE 10
int main()
{
    int i,j,k=0,a,b,n;
    int inarray[SIZE*SIZE];
    int mat[SIZE][SIZE];
    printf("行列の大きさを入力して下さい（最大10 x 10）:");
    scanf ("%d %d",&a,&b);
    printf("\n");
    printf("%d x %d行列を整数値で入力して下さい\n",a,b);
    for(i=0;i<(a*b);i++){
            scanf("%d",&inarray[i]);
        }
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            mat[i][j]=inarray[k];
            k++;
        }
    }
    printf("行列を何倍にしますか？ ");
    scanf("%d",&n);
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            printf("%2d ",n*mat[i][j]);
        }
        printf("\n");
    }
    return 0;

}