#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#define maxSize 100
int stack[maxSize], currentSize=-1;
// day mot phan tu vao stack
int isFull()
{
    if(currentSize == maxSize-1)
    {
        return 1;
    }
    return 0;
}
//kiem tra stack co phan tu ko
int isEmpty()
{
    if (currentSize==-1)
    {
        return 1;
    }
    return 0;
}
int push(int data)
{
    if (isFull())
    {
        return 0;
    }
    currentSize++;
    //currentSize=0
    stack[currentSize]= data;


}
// lay ra mot phqn tu
int  pop()
{
    if(isEmpty())
    {
        return 0;
    }
    int data = stack[currentSize];
    currentSize--;
    return data;

}
void Bin(int n)   // n là số cần chuyển đổi đó
{
    int thuong,du;
    thuong=n;
    while (thuong!=0)
    {
        du=thuong%2;
        push(du);
        thuong=thuong/2;
    }
    printf("So nhi phan la:");
    while (currentSize!=-1)
        printf("%d",pop());
}
void Oct(int n)
{
    int r;
    while (n >= 1)
    {
        r = n%8;
        push(r);

        n /= 8;
    }
    printf("\n");

    // pop
    while (!isEmpty())
    {

        printf("%d",pop());
    }

}

void Hex(int n)
{
    if (n < 16)
    {
        printf("%c","0123456789ABCDEF"[n]); // hien thi ky tu thu n trong chuoi
        return;
    }
    else
        Hex(n / 16);
    printf("%c","0123456789ABCDEF"[n % 16]);
}
void Menu()
{
    printf("\t\tVui long chon chuc nang.\n");
    printf("\t\t----------------------------\n");
    printf("\t1: Chuyen mot so nguyen duong sang he so 2.\n");
    printf("\t2: Chuyen mot so nguyen duong sang he so 8.\n");
    printf("\t3: Chuyen mot so nguyen duong sang he so 16.\n");
    printf("\t4: End.\n");
    printf("\t\t----------------------------\n");

}
int main()
{
    int n,chon;

    printf("Nhap so muon chuyen: ");
    scanf("%d",&n);

    Menu();

    while(1)
    {
        printf("Moi ban chon chuc nang: \n");
        scanf("%d",&chon);
        switch (chon)
        {
        case 1:
            Bin(n);
            break;

        case 2:
            Oct(n);
            break;

        case 3:
            Hex(n);
            break;
        case 4:
            return 0;

    }

}
}
