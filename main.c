#include <stdio.h>
#include<malloc.h>
 int main() {

    int *p_num_list ,count = 0, sum= 0 ,limit =0 , i;

     printf("사용할 최대 개수를 입력하세요 : ");
     scanf("%d",&limit);
     //사용자가 입력한 개수만큼 정수를 저장할 수 있는 메모리를 할당함
     p_num_list = (int *) malloc(sizeof (int)* limit);
    // 중간에 9999를 입력시 종료
     while (count < limit){
         printf("숫자를 입려하세요 (9999를 입력하면 종료) : ");
         scanf("%d", p_num_list + count);      // p_num_list + count == &p_num_list[count]
         if(*(p_num_list + count) == 9999)break;
         count++;
     }
     // 입력받은 횟수만큼 숫자를 출력
     for(i=0;i<count; i++){
         if(i>0)printf(" + ");
         printf(" %d ",*(p_num_list+i));
         sum+=*(p_num_list+i);
     }
     printf(" = %d\n",sum);

}







