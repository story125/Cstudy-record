#include <stdio.h>
#include <malloc.h>

int isFull(int *top, int n){     // 스택이 꽉 찼는지 확인
    return *top == n -1;
}
int isEmpty(int *top){          // 스택의 처음부분이 -1이므로 지금 스택이 비어있는지 확인
    return *top == -1;
}

void NumPush(short **p, int *top, short value){ // 스택에 데이터를 추가하는 함수
  if(isFull(top,(*p)[0])){               // 먼저 스택에 데이터를 넣을 수 있는지 확인한다
      printf("Stack is full\n");     // 스택이 가득 차있다면 메세지를 출력하고 값을 그대로 return 한다
      return;
  }
    (*p)[++(*top)] = value;                 // 스택에 공간이 있다면 p의 top+1번째 공간에 값을 받았던 valye를 삽입한다.
}
short NumPop(short **p,int *top){         //스택에 데이터를 삭제하는 함수
    if(isEmpty(top)){                   // 스택에 삭제할 데이터가 있는지 확인한다
        printf("Stack is empty\n");     // 스택이 비어있다면 메세지를 출력하고 그대로 return한다
        return 0;
    }
    return (*p)[(*top)--];              //현재 스택의 상단 요소를 반환한 후 가르키고 있는 포인터의 위치를 한 칸 아래로 이동시킨다.

}

int main(){

    int n,a,b =1, top = -1,value;
    printf("스택 자료의 크기를 정하시오 : ");
    scanf("%d",&n);
    short *p;
    p = (short *) malloc(sizeof (short)* n );
    while(b){
        printf("Push : 1 or Pop : 2 or 종료 : 3 숫자를 입력해 주세요\n");
        scanf("%d",&a);
        if(a == 1){
            printf("Push 하실 숫자를 입력하세요.");
            scanf("%d",&value);
            NumPush(&p,&top,value);
        }
        else if(a==2){
            if (isEmpty(&top)) {
                NumPop(&p,&top);
            }
            else printf("%d의 숫자를 Pop 하였습니다\n", NumPop(&p,&top));
        }
        else if(a == 3) {
            b = 0;
        }
    }
    printf("------- 스택 숫자 출력 --------\n");
    for(int i=0;i<=top;i++){
        printf("%d\n",p[i]);
    }

    free(p);
    p = NULL;       // 포인터가 NULL을 가르키게하여 이상한 메모리를 가르키지 않게 한다.
    return 0;
}