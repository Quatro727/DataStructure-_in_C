#include "linked_list.h"

int main(void)
{
    int i;
    ListNode *head = NULL;

    //insert data into first position of Linked List
    //and then print the current data that Linked List has
    for(i = 0; i < 5; i++) {
        head = insert_first(head, i);
        print_list(head);
    }


    //delete data into first position of Linked List
    //and then print the current data that Linked List has
    for(i = 0; i < 5; i++) {
        head = delete_first(head);
        print_list(head);
    }

    return 0;
}
