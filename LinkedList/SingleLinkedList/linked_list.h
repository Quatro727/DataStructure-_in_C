#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int element;
//define node
typedef struct ListNode {
    element data;
    struct ListNode *link;
} ListNode;

//prototype functions 
void error(char *message);
ListNode* insert_first(ListNode *head, element value);
ListNode* insert(ListNode *head, ListNode *pre, element value);
ListNode* delete_first(ListNode *head);
ListNode* delete(ListNode *head, ListNode *pre);
void print_list(ListNode *head);

#endif
