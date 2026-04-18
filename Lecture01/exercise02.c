/*02. 문자열 입력 시 팰린드롬인지 확인하기*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];

    while(1){
        printf("# 단어 입력: ");
        scanf("%s", str);
        
        int len=strlen(str);
        if(strcmp(str, "end")==0) break;
        
        char comp[len+1];
        for(int i=0;i<len; i++)
        {
            comp[i]=str[len-1-i];
        }
        comp[len]='\0';

        if(strcmp(comp,str)==0)
        {
            printf("%s는 회문입니다.\n",str);
        }
        else{
            printf("%s는 회문이 아닙니다.\n", str);
        }
    }
    return 0;
}



