#include <stdio.h>
#include <string.h>

 int main() {


    char data[] = "abc";    //"abc" 문자열을 저장
    char result[16];        // 새로운 문자열을 저장할 변수

    strcpy(result, data);
    strcat(result,"def");
     printf("%s + \"def\" = %s \n",data, result);

     return 0 ;
}







