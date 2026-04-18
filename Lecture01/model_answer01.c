/*exercise01 model answer*/
#include <stdio.h>
#include <stdlib.h>//rand()

void printArray(int*, unsigned int);
void initArray(int*, unsigned int);
int searchArray(int*, unsigned int, int);

int main(){
    int num[10];        //데이터  저장
    unsigned int size;  //배열의  크기
    int sData;          //검색할 데이터 저장
    int res=0;          //결과를 위한 변수
    size=sizeof(num)/sizeof(num[0]);
    
    //1. 난수 초기화 및 출력
    initArray(num, size);
    printArray(num, size);
    
    //2. 생성된 난수 숫자 배열에서 입력값의 존재 여부 파악하기: 5번 시행
    for(int i=0;i<5;i++){
        //2-1. 정수 입력
        printf("#검색할 정수를 입력하시오: ");
        scanf("%d", &sData);
        //2-2. 입력값 존재 여부 판단
        res=searchArray(num, size, sData);
        if(res!=-1){
            printf("%d는 %d번 방에 있습니다.\n", sData, res);
        }
        else{
            printf("%d는 존재하지 않습니다.\n", sData);
        }
    }
    return 0;
}
//난수 생성해 배열 초기화
void initArray(int* ap,unsigned int size){
    for(int i=0;i<size;i++){
        *(ap+i)=rand()%20+1;
    }
}
//배열 내 숫자 검색
int searchArray(int* ap, unsigned int size, int sData){
    int position=-1;
    unsigned int i;
    for(i=0;i<size;i++){
        if(ap[i]==sData){
            position=i;
            break;
        }
    }
    return position;
}
//출력
void printArray(int* ap, unsigned int cnt){
    printf("#배열의 내용: ");
    for(int i=0;i<cnt;i++){
        printf("%d ", ap[i]);
    }
    printf("\n");
}

