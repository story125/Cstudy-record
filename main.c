#include <stdio.h>

 void main() {

    int sum =0, num;
    for(; ;){
        printf("num(%d) + sum(%d) = ",num,sum);
        sum +=num;
        printf("%d\n",sum);
        num++
        if(num > 5)break;
    }
    printf("Result : num = %d sum =%d \n",num,sum);
 }
