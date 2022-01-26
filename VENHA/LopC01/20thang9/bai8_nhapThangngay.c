#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;

    printf("nhap ngay thang nam:");
    scanf("%d/%d/%d",&a,&b,&c);

    if ((c%4==0&&c%100!=0)||(c%400==0))
    {

        if((a>=1&&a<=31)&&(b==1||b==3||b==5||b==7||b==8||b==10||b==12))
        {

            printf("%0.2d/%0.2d/%d hop le",a,b,c);

        }
        else if ((a>=1&&a<=30)&&(b==4||b==6||b==9||b==11))
        {

            printf("%0.2d/%0.2d/%d hop le",a,b,c);

        }
        else if ((a>=1&&a<=29)&&(b==2))
        {
            printf("%0.2d/%0.2d/%d hop le",a,b,c);


        }
        else
        {
            printf("%0.2d/%0.2d/%d khong hop le",a,b,c);

        }







    }
    else
    {
        if((a>=1&&a<=31)&&(b==1||b==3||b==5||b==7||b==8||b==10||b==12))
        {

            printf("%0.2d/%0.2d/%d hop le",a,b,c);

        }
        else if ((a>=1&&a<=30)&&(b==4||b==6||b==9||b==11))
        {

            printf("%0.2d/%0.2d/%d hop le",a,b,c);

        }
        else if ((a>=1&&a<=28)&&(b==2))
        {
            printf("%0.2d/%0.2d/%d hop le",a,b,c);


        }
        else
        {
            printf("%0.2d/%0.2d/%d khong hop le",a,b,c);

        }

    }
}
