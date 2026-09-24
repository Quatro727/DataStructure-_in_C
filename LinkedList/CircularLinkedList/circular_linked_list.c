#include "circular_linked_list.h"

void print_list(ListNode *head)
{
    if (head == NULL)
        return;

    ListNode *p = head->link;
    do {
        printf("%d->", p->data);
        p = p->link;
    } while (p != head->link);
}

void free_list(ListNode *head)
{
    if (head == NULL)
        return;
    
    ListNode *p, *temp;

    for (p = head->link; p != head; free(temp)) {
        temp = p;
        p = p->link;
    }
    free(head);
}

ListNode *insert_first(ListNode *head, element data)
{
    ListNode *node = malloc(sizeof(ListNode));

    node->data = data;

    if (head == NULL) {
        head = node;
        node->link = head;
    }
    else {
        node->link = head->link;
        head->link = head;
    }
    return head;
}

ListNode *insert_last(ListNode *head, element data)
{
    ListNode *node = malloc(sizeof(ListNode));

    node->data = data;

    if (head == NULL) {
        head = node;
        node->link = head;
    }
    else {
        node->link = head->link;
        head->link = node;
        head = node;
    }
    return head;
}
