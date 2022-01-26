#include<stdio.h>
#include<math.h>

int main()
{

    int a,b,c;
    printf("nhap ngay thang nam:");
    scanf("%d%d%d",&a,&b,&c);

    if ((c%4==0&&c%100!=0)||(c%400==0))
    {

        if((a>=1&&a<=31)&&(b==1||b==3||b==5||b==7||b==8||b==10||b==12))
        {
            if ((a==1)&&(b==8))
            {
                a=31;
                b=b-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }
            if (b==3&&a==1)
            {
                a=29;
                b=b-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }
            else if (a==1&&b!=1)
            {
                a=30;
                b=b-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }
            else if(a==1&&b==1)
            {
                a=30;
                b=12;
                c=c-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }

            else if (a>1&&a<=31)
            {
                a=a-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }

        }




        else if ((a>=1&&a<=30)&&(b==4||b==6||b==9||b==11))
        {
            if (a==1)
            {
                a=31;
                b=b-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }
            else if (a>1&&a<=30)
            {
                a=a-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }


        }
        else if ((a>=1&&a<=29)&&(b==2))
        {
            if (a==1)
            {
                a=31;
                b=b-1;
                printf(" ngay tiep theo la %0.2d/%0.2d/%d ",a,b,c);
            }
            else if (a>1&&a<=29)
            {
                a=a-1;
                printf(" ngay tiep theo la %0.2d/%0.2d/%d ",a,b,c);
            }




        }
    }
    else
    {
        if((a>=1&&a<=31)&&(b==1||b==3||b==5||b==7||b==8||b==10||b==12))
        {
            if ((a==1)&&(b==8))
            {
                a=31;
                b=b-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }
            if (b==3&&a==1)
            {
                a=28;
                b=b-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }
            else if (a==1&&b!=1)
            {
                a=30;
                b=b-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }
            else if (a==1&&b==1)
            {

                a=30;
                b=12;
                c=c-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }
            else if (a>1&&a<=31)
            {
                a=a-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }
        }


        else if ((a>=1&&a<=30)&&(b==4||b==6||b==9||b==11))
        {
            if (a==1)
            {
                a=31;
                b=b-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }
            else if (a>1&&a<=30)
            {
                a=a-1;
                printf(" ngay sau do la %0.2d/%0.2d/%d ",a,b,c);
            }

        }
        else if ((a>=1&&a<=28)&&(b==2))
        {
            if (a==1)
            {
                a=31;
                b=b-1;
                printf(" ngay tiep theo la %0.2d/%0.2d/%d ",a,b,c);
            }
            else if (a>1&&a<=28)
            {
                a=a-1;
                printf(" ngay tiep theo la %0.2d/%0.2d/%d ",a,b,c);

            }

        }

        else
        {
            printf("%0.2d/%0.2d/%d khong hop le",a,b,c);

        }

    }

}





