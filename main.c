#include <stdio.h>
#include<malloc.h>

 int main() {

    char *p_name;
    p_name = (char *) malloc(32);
    if(p_name != NULL){
        //메모리 할당 성공
        printf("Your name : ");
        gets(p_name);

        printf("Hi ~ %s\n",p_name);
        free(p_name);
    }
    else{
        //메모리 할당 실패
        printf("Memory allocation error! ");
    }

}







