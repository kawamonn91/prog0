#include<stdio.h>
#include<stdlib.h>
#define STSIZE 100

void push(int);
int pop(void);
int detect(int);

int stack[STSIZE];
int top=0;

int main(){
    int data,status,i,n;
    while(1){
        printf("input [+] to push,[-] to pop, [0] to detect --- >>");
        status=scanf("%d",&data);
        if(status!=1) break;
        if(data==0){
            printf("Detect what ? :");
            scanf("%d",&n);
            if(detect(n)!=-1) printf("%d exists at stack[%d]",n,detect(n));
            if(detect(n)==-1) printf("%d is not in stack!\n",n);
            printf("[Stack]");
        for(i=0;i!=top;i++){
            printf(" %d",stack[i]);
        }
        printf("\n");
        }

        else if(data<0){
            printf("Data: %d\n",pop());
            printf("[Stack]");
            for(i=0;i!=top;i++){
            printf(" %d",stack[i]);
        }
        printf("\n");
        }
        
        else{
            push(data);
            printf("[Stack]");
            for(i=0;i!=top;i++){
            printf(" %d",stack[i]);
        }
        printf("\n");
        }
    }
}

void push(int num){
if(top==STSIZE){
    printf("Stack overflow!\n");
    exit(2);
}
stack[top]=num;
top++;
}

int pop(void){
    if (top==0){
        printf("Stack is empty!\n");
        exit(3);
    }
    top--;
    return stack [top];
}

int detect(int n){
    int i=0;
    while(1){
        if(n==stack[i]) break;
        i++;
        if(i>top){
            i=-1;
            break;
        }
    }
    return i;
}
 