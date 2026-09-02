#ifndef LIST_ARRAY_H
#define LIST_ARRAY_H    

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef int element;
typedef struct {
    element arr[MAX_SIZE];
    int size;
} ArrayListType;

/* function prototype */ 
void error(char *message);//error message
void init(ArrayListType *l);//initilaize the Array List
bool is_empty(ArrayListType *l);//check whether the list is empty or not empty
bool is_full(ArrayListType *l);//check wheteher the list is full or not full
element get_entry(ArrayListType *l, int pos);//return the itme located in pos
void print_list(ArrayListType *l);//print the item in ArrayList
void insert_last(ArrayListType *l, element item);//insert an item in last of ArrayList
void insert(ArrayListType *l, int pos, element item);//insert an item in given position of ArrayList
element delete(ArrayListType *l, int pos);//delete an item in given position of ArrayList

#endif
