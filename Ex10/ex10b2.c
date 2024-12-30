#include <stdio.h>
int main()
{
    FILE *fp = fopen("reverse.txt", "w");
    int number,reverse;
    while(1){
        number=0;
        reverse=0;
        printf("Enter a number:");
        scanf("%d",&number);
        //printf("エラー表示\n");
        if(number<0){
            fprintf(stderr,"An error occurred!\n");
            break;
        }
        while(1){
            //printf("桁数の入れ替え\n");
            reverse=reverse*10+number%10;
           // printf("reverse=%d\n",reverse);
            if(number<10)break;
            number=number/10;
            //printf("number=%d\n",number);
        }
        //printf("数字の表示\n");
        printf("%d\n",reverse);
        fprintf(fp, "%d\n", reverse);
    }
    fclose(fp);
return 0;
}