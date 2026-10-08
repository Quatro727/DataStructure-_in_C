#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#define SIZE 100

//node structure 
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

//stack structure
int top = -1;
TreeNode *stack[SIZE];

void push(TreeNode *p)
{
    if (top < SIZE - 1)
        stack[++top] = p;
}

TreeNode *pop(void)
{
    TreeNode *p = NULL;

    if (top >= 0)
        p = stack[top--];

    return p;
}

//implement the inorder traversal by loop
void inorder_iter(TreeNode *root)
{
    while(1) {
        //push node to stack until meet NULL node
        for(; root; root = root->left) 
            push(root);

        //pop the top of stack
        root = pop();

        //if node popped is NULL
        if (!root)
            break;

        //if node popped is normal node
        printf("[%d] ", root->data);
        root = root->right;//move to right node
    }
}

//node of Tree structure
TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};

TreeNode *root = &n6;

int main(void)
{
    printf("Inorder: ");
    inorder_iter(root);
    printf("\n");

    return 0;
}
