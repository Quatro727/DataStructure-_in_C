#include "linked_list.h"

void error(char *message)
{
    printf("%s\n", message);
    exit(1);    
}

ListNode *search_list(ListNode *head, element x)
{
    ListNode *p = head;

    while (p != NULL) {
        if (p->data == x)
            return p;
        p = p->link;
    }

    return NULL;
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

ListNode *reverse(ListNode *head)
{
    //three pointers using for circulate the linked list
    ListNode *p, *q, *r;
    
    //start at head pointer
    p = head;

    //until pointer p meet NULL pointer which means the end of linked list
    while (p != NULL) {
        r = q;
        q = p;
        p = p->link;

        q->link = r;
    }
    return q;
}

ListNode *concat_list(ListNode *head1, ListNode *head2)
{
    if (head1 == NULL)
        return head2;
    else if (head2 == NULL)
        return head1;
    else {
        ListNode *p;

        p = head1;

        while(p->link != NULL) 
            p =p ->link;

        p->link = head2;

        return head1;
    }
}

void print_list(ListNode *head)
{
    ListNode *p;

    for(p = head; p != NULL; p = p->link) 
        printf("%d->", p->data);
    printf("NULL\n");
}
