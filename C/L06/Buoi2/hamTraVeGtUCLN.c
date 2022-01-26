#include<stdio.h>
#include<math.h>


int UCLN(int a, int b)
{
    int s;
    if (a>b)
    {
        s = a%b;
        if (s==0)
        {
            return b;
        }
        else
        {   int c,v;
            for (int i=1; i<b; i++)
            {
                c= b%i;
                v=a%i;
                if (c == v)
                {
                    return i;
                }
            }
        }

    }
    else
    {
        s = b%a;
        if (s==0)
        {
            return a;
        }
        else
        {   int c,v;
            for (int i=1; i<b; i++)
            {
                c= b%i;
                v=a%i;
                if (c == v)
                {
                    return i;
                }
            }
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",UCLN(a,b));
}
