#include "double_linked_list.h"

int main(void)
{
    char ch;
    DListNode *head = malloc(sizeof(DListNode));

    init(head);

    dinsert(head, "Mamamia");
    dinsert(head, "Dancing Queen");
    dinsert(head, "Fernando");

    current = head->rlink;
    print_dlist(head);

    do {
        printf("\nEnter a command(<, >, q): ");

        ch = getchar();

        if (ch == '<') {
            current = current->llink;
            if (current == head)
                current = current->llink;
        }
        else if (ch == '>') {
            current = current->rlink;
            if (current == head)
                current = current->rlink;
        }

        print_dlist(head);
        getchar();
    } while (ch != 'q');

    free(head);

    return 0;
}
