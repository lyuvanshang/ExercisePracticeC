#include<stdio.h>
#include<math.h>

int main()
{
    char k,a,b,c,d;
    a='a';
    b='b';
    c='c';
    d='d';
    printf("Cau 1: Ai la dai ta dau tien cua Viet Nam?? \na: Vo Nguyen Giap\nb:Pham Van Dong\nc: Tran Dan\nd:Hoang Kim Quan\n");
    printf("Cau tra loi cua ban la:");
    scanf("%c",&k);
    printf("\n");
    switch (k)
    {
    case 'a':
        printf("cau tra loi cua ban dung");
        break;
    case 'b':
        printf("cau tra loi cua ban khong dung");
        break;
    case 'c':
        printf("cau tra loi cua ban deo dung");
        break;
    case 'd':
        printf("cau tra loi cua ban deo dung");
        break;

    }

}
