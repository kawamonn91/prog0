#include <stdio.h>
#define ROW 2 
#define COL 3
int main()
{
    int i,j;
    int mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL];
    printf("%d x %d 行列[mat1]の要素を入力してください\n",ROW,COL);
    for(i=0;i<ROW;++i)
        for(j=0;j<COL;++j){
            scanf("%d",&mat1[i][j]);
      }
    
    printf("%d x %d 行列[mat2]の要素を入力してください：\n",ROW,COL);
    for(i=0;i<ROW;++i){
        for(j=0;j<COL;++j){
            scanf("%d",&mat2[i][j]);

        }
    }
    i=1;
    j=1;
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
        mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
        if(i==ROW&&j==COL) break;
    }
    printf("[mat1]と[mat2]の和は；\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            /*printf("i=%d,j=%d\n",i,j);*/
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}