/*1차원 배열: 자료의 삭제와 추가*/
#include <stdio.h>

void deleteData(int*, int*, int);
void insertData(int*, int*, int, int);
void printArray(int*, int);

int main(){
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    int count=10;

    printArray(num, count);
    deleteData(num, &count,3);
    printArray(num, count);

    insertData(num, &count, 4, 9);
    printArray(num, count);

    getchar();
    return 0;
}

//배열에서 data를 삭제하는 함수
void deleteData(int* ap, int* pcount, int index)
{
    if(index<*pcount)
    {
        for(int i=index;i<*pcount;i++)
        {
            ap[i]=ap[i+1];
        }
        (*pcount)--;
    }
    else{
        return;
    }
}
//배열에서 data를 삽입하는 함수
void insertData(int* ap, int* pcount, int index, int data)
{
    if(index<=*pcount)
    {
        for(int i=*pcount;i>index;i--)
        {
            ap[i]=ap[i-1];
        }
        ap[index]=data;
        (*pcount)++;
    }
    else{
        return;
    }
}
//배열의 내용을 출력
void printArray(int* ap, int num)
{
    printf("배열의 내용:  ");
    for(int i=0;i<num;i++)
    {
        printf("%d ", ap[i]);
    }
    printf("\n");
}


 



        
     

