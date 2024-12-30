#include <stdio.h>
#include <stdlib.h>
#define QSIZE 100

void enqueue(int);
int dequeue(void);
int isFull();
int isEmpty();


int queue[QSIZE];
int head =0;
int tail=0;

int main()
{
    int data,status,i,n;
    while(1){
        printf("input>> ");
        //scanfはただしく読み込みした後に1を返すため
        status=scanf("%d",&data);
        n=isFull();
        if(n==1){
            printf("Queue is full\n");
             break;
        }
        
        if(status!=1) break;
        if(data==0) {
            printf("Data: %d\n",dequeue());
            printf("[Queue] ");
            for(int i=head;i<=tail-1;i=(i+1)%QSIZE){
            printf("%d ",queue[i]);
            }
            printf("\n");
        }
        else {
            enqueue(data);
            printf("[Queue] ");
            for(int i=head;i!=tail;i=(i+1)%QSIZE){
            printf("%d ",queue[i]);
            }
            printf("\n");
        }
        n=isEmpty();
        if(n==1){
            printf("Queue is empty\n");
            break;
        }
    }
    printf("\n");
    return 0;
}
   
int isFull(){
    int next=(tail+1)%QSIZE;
     if (next==head){
        //キューがいっぱいの場合の処理
        return 1;
        exit(2);
    }
    else return 0;
}

int isEmpty(){
    if (head==tail){
        //キューが空の場合の処理
        return 1;
        exit(3);
    }
    else return 0;
}

void enqueue(int num){
    int next=(tail+1)%QSIZE;
    queue[tail]=num;
    tail=next;
    }

int dequeue(void){
    int val;
    val=queue[head];
    head=(head+1)%QSIZE;
    return val;
}