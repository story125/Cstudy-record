#include <stdio.h>


 void showMultiplication(int step){
    int i;
    for(i =1; i<=9;i++){
        printf("%d * %d = %d\n",step,i, i*step);
    }
}

 int main() {
for (int i=2;i<=9;i++) {
    showMultiplication(i);
    printf("===================\n");
    }
}
