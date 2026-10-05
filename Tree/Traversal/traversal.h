#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

/* Node */
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Traversal */
void inorder(TreeNode *root);
void preorder(TreeNode *root);
void postorder(TreeNode *root);

