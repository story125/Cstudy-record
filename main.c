#include <stdio.h>



 int main() {

    int input_data;
    // 표준 입력 함수를 사용하여 입력값을 하나만 받음
    input_data = getchar();
    rewind(stdin);      // 표준 입력 버퍼에 있는 모든 값을 제거함
     printf("input : %c\n",input_data);
     input_data = getchar();
     rewind(stdin);     // 똑같이 버퍼에 있는 모든 값을 제거함
     printf("Second input : %c\n",input_data);

     return 0 ;
}







