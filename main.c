#include <stdio.h>
#include<malloc.h>
#define MAX_COUNT 5

 int main() {


    int num[MAX_COUNT], count = 0, sum= 0 , i;
    //최대 5회까지 입력 받고 중간에 9999를 입력시 종료
     while (count <MAX_COUNT){
         printf("숫자를 입려하세요 (9999를 입력하면 종료) : ");
         scanf("%d", num + count);      // num + count == &num[count]
         if(num[count] == 9999)break;
         count++;
     }
     // 입력받은 횟수만큼 숫자를 출력
     for(i=0;i<count; i++){
         if(i>0)printf(" + ");
         printf(" %d ",num[i]);
         sum+=num[i];
     }
     printf(" = %d\n",sum);

}







