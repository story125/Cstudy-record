#include <stdio.h>
 int main() {

    char data[5] = {1,2,3,4,5};
    int result = 0, i;
    char *p =data;

    // 5번 반복하면서  포인터 변수 p를 사용하여 배열의 각 요소를 result 변수에 합산
    for(i =0; i<5;i++){
        result = result + *p;
        p++;
    }

     printf("data 배열의 각 요소의 합은 %d \n",result);

    return 0;
}







