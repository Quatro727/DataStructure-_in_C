#ifndef EVAL_H
#define EVAL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

int evaluate(TreeNode *root);

#endif
