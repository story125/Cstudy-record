#include <stdio.h>

 unsigned char RestBit(unsigned char dest_data, unsigned char bit_num){

    //1바이트 변수라 0~7 자리까지 비트 이동 가능
    if(bit_num < 8){
        dest_data = dest_data & ~(0x01 << bit_num);
    }
    return dest_data;
}


 void main() {

    unsigned char lamp_state = 0x7F;    // 16진주 7F 는 2진수로 0111 1111
    printf("%X ->", lamp_state);    //변경 전 값을 출력
    //  lamp 변수의 3번 비트를 0으로 설정
    lamp_state = RestBit(lamp_state, 3);
     printf("%X \n ",lamp_state);


}







