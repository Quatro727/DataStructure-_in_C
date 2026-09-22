#include "linked_list.h"

//test code1 for search_list operation
int main(void)
{
    ListNode *head = NULL;

    head = insert_first(head, 10);
    print_list(head);

    head = insert_first(head, 20);
    print_list(head);

    head = insert_first(head, 30);
    print_list(head);

    if(search_list(head, 30) != NULL)
        printf("Sucess: there is value 30 in list\n");
    else
        printf("Sucess: there isn't value 30 in list\n");

    return 0;
}


//test code2 for merge operation
/*
int main(void)
{
    ListNode *head1 = NULL;
    ListNode *head2 = NULL;

    head1 = insert_first(head1, 10);
    head1 = insert_first(head1, 20);
    head1 = insert_first(head1, 30);
    print_list(head1);

    head2 = insert_first(head2, 40);
    head2 = insert_first(head2, 50);
    print_list(head2);

    ListNode *merged_list = concat_list(head1, head2);
    print_list(merged_list);

    return 0;
}
*/
//test code3 for reverse operation
/*
int main(void)
{
    ListNode *head1 = NULL;
    ListNode *head2 = NULL;

    head1 = insert_first(head1, 10);
    head1 = insert_first(head1, 220);
    head1 = insert_first(head1, 30);

    print_list(head1);

    head2 = reverse(head1);
    print_list(head2);

    return 0;
}
*/
