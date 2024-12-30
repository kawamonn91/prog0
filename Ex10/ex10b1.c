#include <stdio.h>
#define max_subject 9
#define max_student 20

int main()
{
    printf("1");
    /*生徒数と科目数の格納*/
    int subject,student;
    scanf("%d %d",&subject,&student);
    printf("格納しました\n");

    /*二次元配列で成績の格納*/
    printf("2");
    int i,j;
    int score[max_student][max_subject];
    for(i=0;i<student;i++){
        for(j=0;j<subject;j++){
            scanf("%d",&score[i][j]);
        }
    }
    printf("成績を格納しました\n");

    
    //科目毎の平均点
    printf("3");
    double subject_ave[max_subject]={0};
    for(j=0;j<subject;j++){
        for(i=0;i<student;i++){
            subject_ave[j]+=score[i][j];
        }
        subject_ave[j]/=student;
    }
    printf("科目ごとの平均点を計算しました\n");

    //学生毎の平均点
    printf("4");
    double student_ave[max_student]={0};
    for(i=0;i<student;i++){
        for(j=0;j<subject;j++){
            student_ave[i]+=score[i][j];
        }
        student_ave[i]/=subject;
    }
    printf("学生毎の平均点を計算しました\n");


    //成績と平均点の表示
    printf("科目数：%d,学生数：%d\n",subject,student);
    for(i=0;i<student;i++){
        for(j=0;j<subject;j++){
            printf("%-4d ",score[i][j]);
        }
        printf(": %-3.1f\n",student_ave[i]);
    }

    for(j=0;j<subject;j++){
        printf("%-3.1f ",subject_ave[j]);
    }
    printf("\n");
    return 0;
}