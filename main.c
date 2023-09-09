#include <stdio.h>

int global_val = 30;

void call_by_value(int *val)
{
    val = &global_val;
}

void call_by_refer(int **ref)       // 내가 담고자 하는 포인터 변수 즉 주소값을 저장하기 때문에 30으로 초기화 된다.
{
    *ref = &global_val;
}

int main()
{
    int local_val = 10;
    int *value = &local_val;
    int *refer = &local_val;

    printf("before : *value=%d, *refer=%d\n", *value, *refer);
    call_by_value(value);
    call_by_refer(&refer);
    printf("after  : *value=%d, *refer=%d\n", *value, *refer);
}