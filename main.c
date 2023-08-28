#include <stdio.h>

 void main() {


    unsigned char A = 0x1A;
    char B = 0x1A;

\
    A = A|0xFF;         // unsigned 형이라 그대로 계산
    B = B|0xFF;         // signed라 부호가 있어 2의 보수로 전환 후 계산
    printf("%d %d",A,B);





}







