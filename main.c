#include <stdio.h>


 int ArrayToInteger(char string[]){

    int count = 0, num =0;
    //문자열이 끝날 때 까지 반복
    while(string[count] != 0){
        // 반복할 때마다 이전 값에 10을 곱해서 자릿수를 증가시킴
        num = num * 10 + string[count] - '0' ;
        count++;
    }
    return num;

}



 int main() {

    int first_num, second_num;
    char first_string[16], second_string[16];

     printf("input first number : ");
     gets(first_string);    // 첫 번쨰 문자열 입력
     printf("input second number : ");
     gets(second_string);    // 두 번째 문자열 입력

     first_num = ArrayToInteger(first_string);  // 문자열 -> 정수로 변환
     second_num = ArrayToInteger(second_string);

     printf("%d + %d = %d\n",first_num, second_num, first_num+ second_num);qq




    return 0;
}







