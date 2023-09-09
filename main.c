#include <stdio.h>

 int main() {

    short data =3;
    short *p = &data;
    short  **pp = &p;

     printf("[Before  data : %d\n",data);
     *p =4;
     printf("[Use *p] data : %d\n",data);
     **pp=5;
     printf( "%d \n",data);

}







