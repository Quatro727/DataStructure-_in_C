#include "double_linked_list.h"

int main(void)
{
    DListNode *head = malloc(sizeof(DListNode));
    init(head);

    printf("Insert step\n");

    for (int i = 0; i < 5; i++) {
        //insert into right of head node
        dinsert(head, i);
        print_dlist(head);
    }
    
    printf("Delete step\n");
    for(int i = 0; i < 5; i++) {
        print_dlist(head);
        ddelete(head, head->rlink);
    }
    
    free(head);

    return 0;
}
