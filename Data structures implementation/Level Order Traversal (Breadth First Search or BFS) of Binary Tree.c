#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *left,*right;
}Node;

void printCurrentLevel(struct Node* root, int height);
int height(struct Node* root);
struct Node* insert(int value);

void printLevelOrder(struct Node* root){
    int h= height(root);
    for(int i=1;i<=h;i++){
        printCurrentLevel(root,i);
    }
}

int height(struct Node* root){
    if(root==NULL){
        return 0;
    }
    else{
        
        int l_height= height(root->left);
        int r_height= height(root->right); 
        return l_height > r_height ? l_height+1 : r_height+1;
    }
}

void printCurrentLevel(struct Node* root,int level){
    if(root==NULL){
        return;
    }
    else if( level==1){
        printf("%d\t",root->value);
    }
    else if(level>1){
        printCurrentLevel(root->right,level-1);
        printCurrentLevel(root->left,level-1);
    }
}


struct Node* insert(int value){
    Node* new_node= (Node*)malloc(sizeof(struct Node));
    new_node->value=value;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}

//Driver code
int main(){
    struct Node* root= NULL;
    root= insert(10);
    //left sub-tree
    root->left=insert(15);
    //left sub -sub tree
    root->left->left=insert(33);
    root->left->right=insert(70);
    
    //right sub tree
    root->right=insert(20);
    //right sub-sub tree
    root->right->left=insert(66);
    root->right->right=insert(27);
    //right sub sub sub tree
    root->right->left->left=insert(99);
    
    printCurrentLevel(root,3);
    printf("\n");
    printCurrentLevel(root,2);
    
    
return 0;    
}
