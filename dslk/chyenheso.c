#include <stdio.h>
#include <conio.h>
#include <malloc.h>

/* Dinh nghia Stack */
typedef struct node *stack;

typedef struct node {
    int data;
    stack pre;
};
// global: s
stack s;

// Khoi tao
stack khoitao() {
    s = (stack) malloc(sizeof(struct node));
    if (s == NULL){
        printf("\n ko du bo nho");
        exit(-1); // -1: Error
               }
    else
        s->pre = NULL;

    return s;
}

// Kiem tra empty
int isempty() {
  return (s->pre == NULL);
}

// Them vao stack: Push
void push(int e){
   stack tmp;
   tmp = (stack) malloc(sizeof(struct node));
   if (tmp != NULL){
        tmp->data = e;
        tmp->pre = s->pre;
        s->pre = tmp;
    }
}

// Day khoi stack: Pop
void pop(int *t){
    stack tmp;
    if (!isempty()) {
       tmp = s->pre;
       *t = tmp->data; // SAI O DAY
       s->pre = tmp->pre;
       free(tmp);
     }
}

// Chuong trinh chinh
int main(void) {
    int r,m;

    khoitao();

    printf("\n nhap so =");scanf("%d",&m);

    // push
    while (m >= 1){
        r = m%8;
        push(r);

        m /= 8;
    }
    printf("\n");

    // pop
    while (!isempty()) {
        pop(&r);
        printf("%d",r);
    }

    getch();
}
