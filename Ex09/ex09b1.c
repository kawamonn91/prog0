#include <stdio.h>
int main()
{
    /*行列の定義*/
    int m=0,i,j;
    int inarray[12]={1,3,5,2,4,6,7,9,11,8,10,12};
    int mat[4][3];
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            mat[i][j]=inarray[m];
            m++;
        }
    }
    /*要素の選択*/
    int a,b;
    printf("行要素と列要素のどちらを表示させたいか選択して下さい\n");
    printf("(行要素：0,列要素：1)   :");
    scanf("%d",&a);
    if(a==0)
    printf("表示したい行番号を入力して下さい:");
    if(a==1)
    printf("表示させたい列番号を入力して下さい:");
    if(a<0||a>1){
        for(i=0;i<4;i++){
            for(j=0;j<3;j++){
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
        return 0;
    } 
    scanf("%d",&b);
    
    if(a==0&&b<4&&b>=0){
        for(i=0;i<3;i++){
            printf("%d ",mat[b][i]);
        }
        printf("\n");
    }
    if(a==0&&(b>2||b<0)) printf("行の範囲外です\n");
    if(a==1&&b<3&&b>=0){
        for(i=0;i<4;i++){
            printf("%d\n",mat[i][b]);
        }
        printf("\n");
    }
    if(a==1&&(b>3||b<0))printf("列の選択範囲外です\n");
return 0;

}