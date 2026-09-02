#include "linked_list.h"

void error(char *message)
{
    printf("%s\n", message);
    exit(1);    
}

ListNode* insert_first(ListNode *head, element value)
{   
    //create new node
    ListNode *p = malloc(sizeof(ListNode));

    //initialize the new node
    p->data = value;
    p->link = head;

    //make head points new node
    head = p;

    return head;
}

ListNode* insert(ListNode *head, ListNode* pre, element value)
{
    //create a new node
    ListNode *p = malloc(sizeof(ListNode));

    //link manipulate to insert a new node to linked list
    p->data = value;
    p->link = pre->link;
    pre->link = p;

    return head;
}

ListNode* delete_first(ListNode *head)
{
    //create a pointer variable for node which will be removed
    ListNode *removed;

    //if head pointer has a value NULL
    //it means Linkde List is empty
    if(head == NULL)
        return NULL;

    //makes head points to next node of remove node
    //delete_first() is a function that removes the first node
    //so head will get a remove node
    removed = head;
    head = removed->link;

    //deallocate the remove node which means delete remove node
    free(removed);

    return head;
}

ListNode* delete(ListNode *head, ListNode *pre)
{
    ListNode *removed;

    removed = pre->link;
    pre->link = removed->link;

    free(removed);

    return head;
}

void print_list(ListNode *head)
{
    ListNode *p;

    for(p = head; p != NULL; p = p->link) 
        printf("%d->", p->data);
    printf("NULL\n");
}
