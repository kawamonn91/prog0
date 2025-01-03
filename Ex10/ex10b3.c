/*
* pgm形式の画像データを受け取って,上下反転する。
*
* 終了コード
* 0 : 正常終了
* 1 : 入力データの形式がおかしい
* 2 : 入力データの画素数または階調が範囲外
* 3 : 入力データがおかしいかデータが揃わないうちにEOFになった
* 4 : 入力データの画素の値が範囲外
*/
#include <stdio.h>
#include <stdlib.h>
#define MSIZE 800

int main()
{
  int dat[MSIZE][MSIZE];
  int i, j, width, height, maxval;
  /* 入力 */
  /* ファイル形式のチェック */
  /* この部分はプログラミング入門の範囲を越えているので、このまま使って下さい。*/
  if (getchar() != 'P' || getchar() != '2'){
    fprintf(stderr, "データの形式が違います\n");
    exit(1);
  }

  /* x,yそれぞれの画素数を得る */
  scanf("%d %d", &width, &height);
 
  /* Maxval（白の値）を得る */
  scanf("%d",&maxval);
 
  /* 画素数が範囲外の場合 */
  if (width < 1 || height < 1 || width > MSIZE || height > MSIZE){
    fprintf(stderr, "設定サイズが範囲外です\n");
    exit(2);
  }

  /* Maxvalが範囲外 */
  if (maxval < 1 || maxval >= 65536){
    fprintf(stderr, "階調が範囲外です\n");
    exit(2);
  }

  /* 実際のデータ入力 */
  for (i = 0; i < height; i++){
    for (j = 0; j < width; j++){
      /* scanf入力データがおかしいかＥＯＦになった場合 */
      if(scanf("%d",&dat[i][j]) != 1){
        fprintf(stderr, "データ入力に異常があります\n");
        exit(3);
      }
      /* データが範囲外 */
      if (dat[i][j] < 0 || dat[i][j] > maxval){
        fprintf(stderr, "データが異常でした\n");
        exit(4);
      }
    }
  }
  /* これより上はどのプログラムもほぼ同じ */

  /* 出力 */
  /* 最初にP2とx,yの画素数、Maxvalを出力 */
  printf("P2\n");
  printf("%d %d\n", width, height);
  printf("%d\n", maxval);

  /* 実際のデータ出力 */
  for (i = 0; i < height; i++){
    for (j = 0; j < width; j++){
      printf("%2d ",dat[height-1-i][j]);
    }
    printf("\n");
  }
  return 0;
}