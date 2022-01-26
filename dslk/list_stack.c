#include<stdio.h>
#include<stdlib.h>
// cấu trúc stack:
typedef struct node {
    int data;
    struct node *next;
} NODE;
NODE *top = NULL;
int isEmpty() {
    if(top == NULL) {
        return 1;
    }
    return 0;
}
void push(int data) {
    NODE *newNode = NULL;
    // cấp phát 1 ô nhớ
    newNode = (NODE*)malloc(sizeof(NODE));
    if(newNode == NULL) {
        printf("Khong cap phat duoc");
        return;
    }
    newNode -> data = data;
    // Stack rong
    if(isEmpty()) {
        newNode -> next = NULL;
    } else {
        // stack co phan tu
        newNode -> next = top;
    }
    // cap nhap lai top
    top = newNode;
}
void pop() {
    if(isEmpty()) {
        printf("Stack Rong");
        return;
    }
    // giong xoa pHead;
    NODE *del;
    del = top;
    top = top -> next;
    free(del);
}
// lay phan tu dau tien
int peek() {
    if(isEmpty()) {
        printf("Stack Rong");
        return 0;
    }
    return top -> data;
}
void display() {
    NODE *i;
    for(i = top; i != NULL; i = i -> next) {
        printf("%d =>", i -> data);
    }
}
int main() {
    push(1);
    push(2);
    push(3);
    push(5);
    printf("%d",peek());
    display();
}
