#include <stdio.h>

 int GetStringLength(char data[]){
    int count = 0;
    // \0이 나올 때 까지 문자의 개수를 더함
    while(data[count]){             // data[count]!= 0 와 같은 뜻이다.
        count++;
    }
    return count;
}


 int main() {

    int data_length;        // 문자열 길이를 저장할 변수
    char data[]= "happy!";  //  happy 문자열 저장
    //data 변수에 들어 있는 문자열 길이를 구함
    data_length = GetStringLength(data);
    //문자열 길이 출력
     printf("data length = %d\n", data_length);
     return 0 ;
}







