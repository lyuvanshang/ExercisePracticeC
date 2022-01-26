#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1,x2,y2;
    printf("toa do x1:");
    scanf("%d",&x1);
    printf("toa do y1:");
    scanf("%d",&y1);

    printf("toan do x2:");
    scanf("%d",&x2);
    printf("toa do y2:");
    scanf("%d",&y2);

    if ((x1==x2)||(y1==y2))
    {
        printf("xeT an duoc xeD");

    }
    else
    {
        printf("xeT eo an duoc xeD");
    }
    return 0;

}
