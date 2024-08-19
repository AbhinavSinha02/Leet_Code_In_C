#include <stdio.h>
#include <stdlib.h>

typedef struct Noode {
    int value;
    struct Node *right,*left;
}Node;

struct Node* newNode (int value){
    struct Node* new_node= (Node*)malloc(sizeof(structNode));
    new_node->value= value;
    new_node->right= new_node->left = NULL;
    return new_node;
}

struct Node* search(struct Node* root, int value ){
    if(root==NULL|| root->value== value){
        return root;
    }
    if(root->value < value){
        return search(root->right,value);
    }
    return search (root->left,value);
}

int main()
{
    // Creating a hard coded tree for keeping 
    // the length of the code small. We need 
    // to make sure that BST properties are 
    // maintained if we try some other cases.
    struct Node* root = newNode(50);
    root->left = newNode(30);
    root->right = newNode(70);
    root->left->left = newNode(20);
    root->left->right = newNode(40);
    root->right->left = newNode(60);
    root->right->right = newNode(80);

    printf(search(root, 19) != NULL ? "Found\n"
                                    : "Not Found\n");
    printf(search(root, 80) != NULL ? "Found\n"
                                    : "Not Found\n");

    return 0;
}

