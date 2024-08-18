#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}Node;

Node* createNode(int data){
    Node* new_node= (Node*)malloc(sizeof(struct Node));
    new_node->data= data;
    new_node->left= NULL;
    new_node->right= NULL;
    return new_node;
    
}

Node* insert(Node* root,int data){
    if(root==NULL){
        return createNode(data);
    }
    if(data<root->data){
        root->left=insert(root->left,data);
        
    }
    else if(data>root->data){
        root->right= insert(root->right,data);
    }
    return root;
}

void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}


Node* search(Node* root,int data){
    if(root==NULL||root->data==data){
        return root;
    }
    if (data< root->data){
        return search(root->left,data);
    }
    return search(root->right,data);
}


//DRIVER code 
int main(){
    struct Node* root=NULL;
    root= insert(root,88);
    insert(root,56);
    insert(root,89);
    insert(root,67);
    insert(root,90);
    insert(root,87);
    insert(root,868);
    insert(root,288);
    
    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    int key = 87;
    struct Node* result = search(root, key);
    if (result != NULL) {
        printf("Node with value %d found in the tree.\n", key);
    } else {
        printf("Node with value %d not found in the tree.\n", key);
    }

    return 0;
}
