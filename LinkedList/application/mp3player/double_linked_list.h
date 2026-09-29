#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element[100];
typedef struct DListNode {
    element data;
    struct DListNode *llink;
    struct DListNode *rlink;
} DListNode;

extern DListNode *current;

void init(DListNode *phead);
void print_dlist(DListNode *phead);
void dinsert(DListNode *before, const char *data);
void ddelete(DListNode *head, DListNode *removed);

#endif
