#include "list_array.h"

void error(char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void init(ArrayListType *l)
{
    l->size = 0;
}

bool is_empty(ArrayListType *l)
{
    return (l->size == 0);
}

bool is_full(ArrayListType *l)
{
    return (l->size == MAX_SIZE);
}

element get_entry(ArrayListType *l, int pos)
{
    if(pos < 0 || pos >= l->size) 
        error("Invalide Position...");
    return l->arr[pos];
}

void print_list(ArrayListType *l)
{
    int i;
    for(i = 0; i < l->size; i++) {
        printf("%d->", l->arr[i]);
    }
    printf("\n");
}

void insert_last(ArrayListType *l, element item)
{
    if(l->size >= MAX_SIZE) 
        error("Invalid Position...");
   
    l->arr[l->size++] = item;
}

void insert(ArrayListType *l, int pos, element item)
{
    if(!is_full(l) && (pos >= 0) &&(pos <= l->size)) {
            for(int i = (l->size - 1); i >= pos; i--) {
                l->arr[i+1] = l->arr[i];
            }
            l->arr[pos] = item;
            l->size++;
    }
}

element delete(ArrayListType *l, int pos)
{
    element item;

    if(pos < 0 || pos >= l->size)
        error("Invalid Position...");

    item = l->arr[pos];
    for(int i = pos; i < (l->size - 1); i++) {
        l->arr[i] = l->arr[i+1];
    }
    l->size--;

    return item;

}

  




            
