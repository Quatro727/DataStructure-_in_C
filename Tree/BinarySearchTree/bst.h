#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode {
    element key;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

//function prototypes
TreeNode *search(TreeNode *node, int key);
TreeNode *new_node(int item);
TreeNode *insert_node(TreeNode *node, int key);
TreeNode *min_value_node(TreeNode *node);
TreeNode *delete_node(TreeNode *root, int key);

//inorder
void inorder(TreeNode *root);

#endif
