#include<stdio.h>
int main()
{
  int size,where,a=800,b=1000,c=1200,d=1400,e=1600;
  printf("サイズを入力してください（小...1、中...2、大...3)");
  scanf("%d",&size);
  printf("行き先を入力してください(福島県内...1、宮城県...2、山形県...3、岩手県...4、秋田県...5、青森県...6）");
  scanf("%d",&where);
  if(size>=1 && size<= 3 && where>=1 && where<= 6 )
    printf("運賃は");
  if(size==1 && where==1) printf("%d",a);
  else if(size==1 && where>=2 && where<=3) printf("%d",b);
  else if(size==1 && where==4) printf("%d",c);
  else if(size==1 && where==5) printf("%d",d);
  else if(size==1 && where==6) printf("%d",e);
  
  else if(size==2 && where==1) printf("%d",a+200);
  else if(size==2 && where>=2 && where<=3) printf("%d",b+200);
  else if(size==2 && where==4) printf("%d",c+200);
  else if(size==2 && where==5) printf("%d",d+200);
  else if(size==2 && where==6) printf("%d",e+200);
  
  else if(size==3 && where==1) printf("%d",a+400);
  else if(size==3 && where>=2 && where<=3) printf("%d",b+400);
  else if(size==3 && where==4) printf("%d",c+400);
  else if(size==3 && where==5) printf("%d",d+400);
  else if(size==3 && where==6) printf("%d",e+400);
  if(size>=1 && size<= 3 && where>=1 && where<= 6 )
    printf("円です\n");
  if(size<0 || size>3)printf("サイズ番号が不正です\n");
  if(where<0 || where>6) printf("地域番号が不正です\n");
}
  
  
  
			 
