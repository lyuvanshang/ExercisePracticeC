
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float x1,x2,x3,x,denta;
    printf("giai pt ax^2+by+c=0");

    printf("\nnhap a:");
    scanf("%d",&a);
    printf("nhap b:");
    scanf("%d",&b);
    printf("nhap c:");
    scanf("%d",&c);

    if (a==0)
    {
        if (b==0)
        {
            if(c==0)
            {
                printf("pt vo so nghiem");
            }
            else
            {
                printf("pt vo nghiem");
            }
        }
        else
        {
            x=-c/b;
            printf("nghiem cua pt x=%.2f",x);
        }

    }
    else
    {
        denta=b*b-4*a*c;
        if (denta<0)
        {
            printf(" pt u co nghiem");


        }
        if (denta==0)
        {
            x1=(-b)/(2*a);
            printf(" nghiem cua pt la:%.2f",x1);
        }
        else
        {
            x2=(-b+sqrt(denta))/(2*a);
            x3=(-b-sqrt(denta))/(2*a);
            printf("nghiem pt la:%.2f va %.2f",x2,x3);

        }



    }
    return 0;





}


