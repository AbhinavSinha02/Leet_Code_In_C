#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct Stack{
    int top;
    int item[MAX];
}Stack;

Stack* create(){
    Stack* stk= (Stack*)malloc(sizeof(Stack));
    stk->top=-1;
    return stk;
}

int isEmpty(Stack* stk){
   return stk->top==-1;
}

int isFull(Stack* stk){
    return stk->top==MAX-1;
}

int pop(Stack* stk){
    if(isEmpty(stk)){
        printf("Stack is empty");
        return -1;
    }
     return stk->item[stk->top--];
    
    
}

void push(Stack* stk, int value){
    
    if(isFull(stk)){
        printf("Stack overflow");
        return;
    }
    stk->item[++stk->top]=value;
    
}

int peek(Stack* stk){
    if(isEmpty(stk)){
        printf("Stack is empty");
        return -1;
    }
     return stk->item[stk->top];
     
}

//Drvier code
int main(){
    Stack* trek= create();
    push(trek,10);
    push(trek,17);
    push(trek,105);
    push(trek,67);
    push(trek,240);
    push(trek,1089);
    
    
    printf("%d\n", pop(trek));
    printf("%d\n", peek(trek));
    push(trek,69);
    printf("%d\n", peek(trek));
    
}
