#include <stdio.h>

 int GetData(void *p_data, char type){

    int result =0;
    // type 변수에 저장된 값을 기준 으로 형 변환을 다르게 함.
    if(type == 1)result = *(char *)p_data;
    else if(type ==2) result = *(short *)p_data;
    else if(type ==4) result = *(int *)p_data;
     return result;

}


 int main() {

    int data = 0x12345678;
    // data변수에서 2바이트 크기만 출력
     printf("%X \n", GetData(&data,2));



     return 0 ;
}







