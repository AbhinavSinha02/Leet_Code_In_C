#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct Node{
    int value;
    struct Node* npx;
}Node;

Node* XOR( Node* a, Node* b){
    return (Node*)((uintptr_t)a ^ (uintptr_t)b);
}

Node* createnode(Node* head_ref,int value){
    Node* new_node= (Node*)malloc(sizeof(Node));
    new_node->value = value;
    new_node->npx=head_ref;
    
    if(head_ref!=NULL){
        head_ref->npx= XOR(new_node, head_ref->npx);
    }
    
    return new_node;
}

void PrintContents(Node* head){
    Node* curr=head;
    Node* prev= NULL;
    Node* next;
    
   while(curr!=NULL){
        printf("%d\n",curr->value);
        next= XOR(curr->npx,prev);
        prev=curr;
        curr=next;
   }
    
}


//Drvier code
int main(){
    
    Node* Head= NULL;
    Head= createnode(Head, 10);
    Head= createnode(Head, 20);
    Head= createnode(Head, 14);
    Head= createnode(Head, 57);
    Head= createnode(Head, 199);
    
    PrintContents(Head);
  return 0;
    
    
}
