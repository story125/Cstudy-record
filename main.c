#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct node
{
    char student[50];
    int korean;
    int english;
    int math;
    int average;
    struct node *p_next;
}NODE;
void Addsubject(NODE **pp_head,NODE **pp_tail, char **count){
    char name[50];
    int Kor, Eng, Mat, Avg;
    printf("%d번쨰 학생 이름:",++(*count));
    scanf("%s",name);
    printf("국어 점수:");
    scanf("%d",&Kor);
    printf("영어 점수:");
    scanf("%d",&Eng);
    printf("수학 점수:");
    scanf("%d",&Mat);
    Avg = (Kor + Eng + Mat)/3;
    if(NULL != *pp_head){
        (*pp_tail)->p_next = (NODE *) malloc(sizeof (NODE));
        *pp_tail = (*pp_tail)->p_next;
    }else{
        *pp_head = (NODE *) malloc(sizeof (NODE));
        *pp_tail = *pp_head;
    }
    strcpy((*pp_tail)->student, name);
    (*pp_tail)->korean = Kor;
    (*pp_tail)->english = Eng;
    (*pp_tail)->math = Mat;
    (*pp_tail)->average = Avg;
    (*pp_tail)->p_next = NULL;
}

int main() {
    NODE *p_head = NULL, *p_tail =NULL,*p;
    int choice = 0, sum = 0;
    char *count = 0;
    while (choice != 3){
        printf("  [Menu]\n");
        printf("1.성적 입력\n2.성적확인\n3.종료\n");
        printf("-------------\n");
        printf("선택 (1 ~ 3) :");
        scanf("%d",&choice);
        if(choice==3)break;
        else if(choice == 1){
            Addsubject(&p_head,&p_tail,&count);
        }
        else if(choice == 2){
            p = p_head;
            printf("-----------------------------------------\n");
            printf(" 이름\t국어\t영어\t수학\t총점\t평균\n");
            printf("-----------------------------------------\n");
            while(p != NULL){
                sum = sum + p->math+p->korean+p->english;
                printf("%5s%5d%5d%5d%5d%5d\n",p->student,p->korean,p->english,p->math,sum,p->average);
                p= p->p_next;
            }
        }

    }

    while (p_head != NULL){
        p = p_head;
        p_head = p_head->p_next;
        free(p);
    }
    p_tail = p_head;

    return 0;
}

