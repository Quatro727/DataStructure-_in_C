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
ListNode *search_list(ListNode *head, element x);
ListNode* insert_first(ListNode *head, element value);
ListNode* insert(ListNode *head, ListNode *pre, element value);
ListNode* delete_first(ListNode *head);
ListNode* delete(ListNode *head, ListNode *pre);
ListNode *reverse(ListNode *head);
ListNode *concat_list(ListNode *head1, ListNode *head2);
void print_list(ListNode *head);

#endif
