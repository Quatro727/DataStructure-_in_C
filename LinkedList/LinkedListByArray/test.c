#include "list_array.h"

int main(void)
{
    //Create list of ArrayLIstType statically 
    //pass a pointer to function as argument
    ArrayListType list;

    init(&list);
    insert(&list, 0, 10);
    print_list(&list);

    insert(&list, 0, 20);
    print_list(&list);

    insert(&list, 0, 30);
    print_list(&list);
   
    insert_last(&list, 40);
    print_list(&list);
    
    delete(&list, 0);
    print_list(&list);

    return 0;
}
