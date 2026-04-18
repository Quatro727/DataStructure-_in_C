/*1차원 배열 자료 구조의 활용: 선형 검색*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[10];
    int search_num;

    for(int i=0;i<10;i++)
    {
        num[i]=rand()%20+1;
    }
    
    for(int i=0;i<5;i++)
    {
        printf("#검색할 정수를 입력하시오: ");
        scanf("%d", &search_num);
        int check=0;

        for(int j=0;j<10;j++)
        {
            if(search_num==num[j])
            {
                printf("%d는 %d번 방에 있습니다.\n", search_num, j);
                check=1;
            }
        }
        if(check==0)
        {
            printf("%d는 존재하지 않습니다.\n",search_num);
        }
    }
    return 0;
}

