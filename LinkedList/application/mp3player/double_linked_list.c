#include "double_linked_list.h"

DListNode *current = NULL;

void init(DListNode *phead)
{
    phead->llink = phead;
    phead->rlink = phead;
}

void print_dlist(DListNode *phead)
{
    DListNode *p;

    for (p = phead->rlink; p != phead; p = p->rlink) {
        if (p == current)
            printf("<-| |#%s#| |->", p->data);
        else
            printf("<-| | %s | |->", p->data);
    }
    printf("\n");
}

void dinsert(DListNode *before, const char *data)
{
    DListNode *newnode = malloc(sizeof(DListNode));

    strcpy(newnode->data, data);

    newnode->llink = before;
    newnode->rlink = before->rlink;

    before->rlink->llink = newnode;
    before->rlink = newnode;
}

void ddelete(DListNode *head, DListNode *removed)
{
    if (removed == head)
        return;

    removed->llink->rlink = removed->rlink;
    removed->rlink->llink = removed->llink;

    free(removed);
}
