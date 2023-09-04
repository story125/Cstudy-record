#include <stdio.h>
 int main() {

    int num = 0;
    // 정상적인 나이를 입력할 떄까지 반복하기 위해 무한 반복을 사용함

    while(1){

        printf("input age: ");
        scanf("%d", &num);

        if(num > 0 && num <=130){
            break;
        }
        else{
            printf("Incorrect Age \n");

        }
    }

     printf( " your age : %d \n",num);

    return 0;
}







