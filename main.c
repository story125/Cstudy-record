#include <stdio.h>

 unsigned char GetBit(unsigned char dest_data, unsigned char bit_num){
    unsigned char bit_state = 0;
    //1바이트 변수라 0~7 자리까지 비트 이동 가능
    if(bit_num < 8){
        bit_state = dest_data & (0x01 << bit_num);
        bit_state = bit_state >> bit_num;
    }
    return bit_state;
}


 void main() {

    unsigned char lamp_state = 0x75;    // 16진수 75 는 2진수로 0111 0101
    unsigned  char bit_state;
    int i;

    printf("%X -> ", lamp_state);    //변경 전 값을 16진법으로 출력
    // 8개의 비트 값을 모두 출력하기 위해 8번 반복함.

    for(i=0;i<8;i++){
        bit_state = GetBit(lamp_state,7 - i);
        // 비트 값을 출력
        printf("%d", bit_state);
    }
     printf("\n");

}







