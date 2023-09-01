#include <stdio.h>

 int GetString(char buffer[], int limit){
    int i;
    for(i= 0; i<limit;i++){
        buffer[i] = getchar();
        if(buffer[i] == '\n'){
            buffer[i] = 0;
            return 1;
        }

    }
    buffer[i] =0 ;
     rewind(stdin);
     return 0;
}


 int main() {
    int n = 10;

    char temp[n];
    int state;
    // 사용자에게 최대 n개까지만 입력 받겠다고 제한
    state = GetString(temp, n-1);
    if(state == 1)printf("input : %s\n",temp);              // 정상 입력
    else printf("input : %s -> out of range \n",temp);      // 범위를 초과함
     return 0 ;
}







