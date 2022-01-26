#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size];
int front = -1;
int rear = 1;
int isFull()
{
    if (rear ==size-1)
    {
        return 1;
    }
    return 0;
}

int isEmpty()
{
    if(front==-1 && rear == -1)
    {
        return 1;
    }
    return 0;
}

// enqueue them mot phan tu
void enqueue(int data)
{
    if (isFull())
    {
        printf("Hang doi day\n");
        return;
    }
    if (isEmpty())
    {
        rear = front = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = data;

}

void dequeue ()
{
    if (isEmpty())
    {
        return ;
    }
    if (front=rear)
    {
        front= rear = -1;
    }
    else
    {
        front++;
    }
}

int getFront()
{
    if (isEmpty())
    {
        return 0;
    }
    return queue[front];
}
void display ()
{
    for (int i = front; i<= rear; i++)
    {
        printf("=");
    }
    printf("\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d",queue[i]);

    }
    for (int i = front; i<= rear; i++)
    {
        printf("=");
    }
    printf("\n");
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    //printf("\n front: %d", getFront());
    dequeue();
    display();
}
