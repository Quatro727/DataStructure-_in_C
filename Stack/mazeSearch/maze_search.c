#include <stdio.h>
#include "stack.h"

#define MAZE_SIZE 6

element here = {1, 0}, entry = {1, 0};

char maze[MAZE_SIZE][MAZE_SIZE] = {
    {'1', '1', '1', '1', '1', '1'},
    {'e', '0', '1', '0', '0', '1'},
    {'1', '0', '0', '0', '1', '1'},
    {'1', '0', '1', '0', '1', '1'},
    {'1', '0', '1', '0', '0', 'x'},
    {'1', '1', '1', '1', '1', '1'}
};


void push_loc(Stacktype *s, int r, int c) {
    //if location is out of maze
    if(r < 0 || c < 0) return;
    //check the available path and then push it to stack
    if(maze[r][c] != '1' && maze[r][c] != '.') {
        element tmp;
        tmp.r = r;
        tmp.c = c;
        push(s, tmp);
    }
}

void maze_print(char maze[MAZE_SIZE][MAZE_SIZE] ) {
    printf("\n");
    for(int r = 0; r < MAZE_SIZE; r++) {
        for(int c = 0; c < MAZE_SIZE; c++) {
            printf("%c", maze[r][c]);
        }
        printf("\n");
    }
}

int main(void){
    int r, c;
    Stacktype s;

    init_stack(&s);
    here = entry;

    while(maze[here.r][here.c] != 'x') {
        //update the loaction
        r = here.r;
        c = here.c;
        
        //update the location which was visited
        maze[r][c] = '.';
        maze_print(maze);
        
        //check 4 direction to find  availble path
        push_loc(&s, r - 1, c);
        push_loc(&s, r + 1, c);
        push_loc(&s, r, c + 1);
        push_loc(&s, r, c - 1);
        
        //if there is no location in stack, it will be fail to escape
        if(is_empty(&s)) {
            printf("Fail\n");
            return -1;
        }
        //update to next location
        else {
            here = pop(&s);
        }
    }
    printf("Success\n");

    return 0;
}
