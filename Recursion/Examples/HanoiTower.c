/*HanoiTower using recursion*/
#include <stdio.h>

void hanoi_tower(int, char, char, char);

int main(){
    hanoi_tower(4, 'A', 'B', 'C');
    return 0;
}

//move n disks from 'from' bar to 'to' bar
void hanoi_tower(int n, char from, char tmp, char to){
    //when n is 1
    if (n == 1) printf("Move disk 1 to %c from %c\n", to, from);
    else{
        hanoi_tower(n - 1, from, to, tmp);//move (n-1) disks to tmp bar from 'from' bar using recursion
        printf("Move %d disks to %c from %c\n", n, to, from);
        hanoi_tower(n-1, tmp, from, to);//move (n-1) disks to 'to' bar from tmp bar
    }
}


