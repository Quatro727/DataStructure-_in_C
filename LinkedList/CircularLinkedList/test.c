#include "circular_linked_list.h"

int main(void)
{
    ListNode *head = NULL;

    head = insert_first(head, 10);
    head = insert_last(head, 20);
    head = insert_last(head, 30);
    head = insert_last(head, 40);

    print_list(head);
    printf("\n");

    free_list(head);

    return 0;
}

