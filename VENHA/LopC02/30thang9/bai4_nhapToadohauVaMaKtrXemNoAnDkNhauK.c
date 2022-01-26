#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int x1,x2,y1,y2,k,k2;

    printf("nhap toa do con Ma:");
    scanf("%d %d",&x1,&y1);
    printf("nhap toa do con Hau:");
    scanf("%d %d",&x2,&y2);
    k=abs(x1-x2);
    k2=abs(y1-y2);



    if ((x1==x2&&y1!=y2)||(x1!=x2&&y1==y2)||(k==k2&&k!=0&&k2!=0))
    {
        printf("Hau an duoc Ma\n");
        printf("Ma khong an duoc Hau");
    }
    else if ((k==1&&k2==2)
             ||(k==2&&k2==1))
    {
        printf("Ma an duoc Hau\n");
        printf("Hau khong an duoc Ma");
    }
    else if (x1==x2&&y1==y2){
        printf("Ma va Hau trung nhau");
    }
    else
    {
        printf("Ma va Hau cung khong an duoc nhau");
    }

    return 0;

}
