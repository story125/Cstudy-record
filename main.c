#include <stdio.h>

 int main() {

    short birthday;
    short *ptr;
    ptr = &birthday;

    // %p 형식은 메모리 주소를 16진수 형식으로 출력함
     printf("birthday의 변수의 주소는 %p입니다\n",ptr);

     return 0 ;
}







