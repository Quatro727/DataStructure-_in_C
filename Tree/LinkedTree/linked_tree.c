#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/*
 *      n1
 *     / |
 *   n2  n3
 */

int main(void)
{
    //create a pointers for n1, n2, n3
    TreeNode *n1;
    TreeNode *n2;
    TreeNode *n3;

    //create a node for n1, n2, n3
    n1 = malloc(sizeof(TreeNode));
    n2 = malloc(sizeof(TreeNode));
    n3 = malloc(sizeof(TreeNode));

    //build a tree structure using pointers
    n1->data = 10;
    n1->left = n2;
    n1->right =n3;

    n2->data = 20;
    n2->left = NULL;
    n2->right = NULL;
    
    n3->data = 30;
    n3->left = NULL;
    n3->right = NULL;

    //deallocating a memory assigned to n1, n2, n3
    free(n1);
    free(n2);
    free(n3);

    return 0;
}
