#include <stdio.h>

int main()
{
  int i, j, m, n;
  int inarray[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int mat1[5][3], mat2[3][5];
   
  /* 1次元配列から5x3配列への変換 */
  /*この部分を補う*/
 i=0;
 for(m=0;m<=4;m++){
  for(n=0;n<=2;n++){
    mat1[m][n]=inarray[i];
    i++;
  }
 }
  
   
  printf("1次元配列から5x3配列への変換結果\n");
  for (i=0; i<5; i++){
    for (j=0; j<3; j++){
      printf("%2d ", mat1[i][j]); 
    }
    printf("\n");
  } 

  /* 5x3配列から3x5配列への変換 */
  /* この部分を補う その際  mat2[m][n] = mat1[i][j]; を使うこと */

  for (i=0;i<3;i++){
    for(j=0;j<5;j++){
      /*for(m=0;m<3;m++){
        for(n=0;n<5;n++){
          mat2[m][n]=mat1[i][j];
        }*/
      mat2[i][j]=mat1[j][i];
    }
  }
  
    /*for(m=0;m<3;m++){
        for(n=0;n<5;n++){
          for (i=0;i<3;i++){
    for(j=0;j<5;j++){mat2[i][j]=mat[m][n];}}}}*/


  printf("5x3配列から3x5配列への変換結果\n");
  for (i=0; i<3; i++){
    for (j=0; j<5; j++){
      printf("%2d ", mat2[i][j]); 
    }
    printf("\n");
   }
 return 0;
}