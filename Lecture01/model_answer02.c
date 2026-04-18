/*exercise02 모범 답안*/
#include <stdio.h>
#include <string.h>

void inputString(char*);
int checkPalindrome(char*);
int main(){
    char str[100];
    int res;

    inputString(str);
    while(strcmp(str, "end")!=0){
        res=checkPalindrome(str);
        if(res==1){
            printf("\"%s\"는 회문입니다.!\n", str);
        }
        else{
            printf("\"%s\"는 회문이 아닙니다!\n",str);
        }
        inputString(str);
    }
    return 0;
}
//문자열 입력 함수
void inputString(char* sp){
    printf("# 단어 입력: ");
    scanf("%s", sp);
}
//팰린드롬 검사 함수
int checkPalindrome(char* sp){
    int len;
    int check=1;
    len=strlen(sp);

    for(int i=0;i<len/2;i++){
        if(sp[i]!=sp[len-1-i]){
            check=0;
            break;
        }
    }
    return check;
}




