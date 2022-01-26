#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,socach;
    socach =0;

    //200 to 1000
    for (a=0; a<=200; a++)
    {

        for (b=0; b<=100; b++)
        {



            for (c=0; c<=40; c++)
            {


                if (a*1000+b*2000+c*5000==200000)
                {


                    socach=socach+1;

                }

            }
        }
    }


    printf("co tat ca %d cach chon,OK",socach);
}
