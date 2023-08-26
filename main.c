#include <stdio.h>

 int main() {

    int sum =0, num= 1;
    while(num<=5){
        printf("num(%d) + sum (%d) = ",num,sum);
        sum = sum + num;
        printf("%d\n",sum);
        num++;
    }

    printf("Result : num = %d sum =%d \n",num,sum);
    return 0;
 }
