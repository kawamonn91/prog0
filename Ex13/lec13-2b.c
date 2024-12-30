#include<stdio.h>
#include <stdlib.h>
#define QSIZE 100

void enqueue(int);
int dequeue(void);

int queue[QSIZE] ;
int head=0;
int tail =0;

int main()
{
    int data,status,i;
    while(1){
        printf("input>> ");
        //scanfはただしく読み込みした後に1を返すため
        status=scanf("%d",&data);
        if(status!=1) break;
        if(data==0) printf("Data: %d\n",dequeue());
        else enqueue(data);
    }
    printf("\n");
    return 0;
}


void enqueue(int num){
    int next=(tail+1)%QSIZE;
    if (next==head){
        printf("queue is full\n");
        exit(2);
    }
    queue[tail]=num;
    tail=next;
    }


int dequeue(void){
    int val;

    if(head==tail){
        printf("queue is empty\n");
        exit(3);
    }
    val=queue[head];
    head=(head+1)%QSIZE;
    return val;
}