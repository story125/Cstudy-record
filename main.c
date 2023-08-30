#include <stdio.h>
#include <string.h>

 int main() {

    int data_length;        // 문자열 길이를 저장할 변수
    char data[]= "happy!";  //  happy 문자열 저장
    //data 변수에 들어 있는 문자열 길이를 구함
    data_length = strlen(data);
    //문자열 길이 출력
     printf("data length = %d\n", data_length);
     return 0 ;
}







