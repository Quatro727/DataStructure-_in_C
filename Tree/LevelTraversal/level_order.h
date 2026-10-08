#ifndef LEVEL_H
#define LEVEL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <memory.h>

#define MAX_QUEUE_SIZE 100

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;
typedef TreeNode* element;
typedef struct {
    element data[MAX_QUEUE_SIZE];
    int front, rear;
} QueueType;

//prototypes of functions
void error(char *message);
void init_queue(QueueType *q);
bool is_empty(QueueType *q);
bool is_full(QueueType *q);
void enqueue(QueueType *q, element item);
element dequeue(QueueType *q);
void level_order(TreeNode *ptr);
#endif

