#include <stdio.h>



 int main() {

   //문자열은 마지막에 NULL 문자 0을 포함해야 하므로 최대 9개의 문자까지 저장가능함
   char input_string[10];
     gets(input_string); // 문자열을 입력 받아 input_string에 저장함
     printf("input : %s\n",input_string);

     return 0 ;
}







