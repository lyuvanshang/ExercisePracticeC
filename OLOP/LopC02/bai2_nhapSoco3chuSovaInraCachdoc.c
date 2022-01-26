#include<stdio.h>
#include<math.h>


int main()
{
    int so,tram,donvi,chuc;
    printf("nhap so 3 chu so:");
    scanf("%d",&so);
    tram=so/100;
    chuc=(so/100)%10;
    donvi=so%10;



    switch (tram)
    {
    case 1:
        printf("mot tram\t");
        break;
    case 2:
        printf("hai tram\t");
        break;
    case 3:
        printf("ba tram");
    case 4:
        printf("bon tram");
        break;
    case 5:
        printf("nam tram");
        break;
    case 6:
        printf("sau tram");
        break;
    case 7:
        printf("bay tram");
        break;
    case 8:
        printf("tam tram");
        break;
    case 9:
        printf("chin tram");
        break;

    }
    switch (chuc)
    {
    case 0:
        printf("linh");
        break;
    case 1:
        printf("muoi");
        break;
    case 2:
        printf("hai muoi");
        break;
    case 3:
        printf("ba muoi");
        break;
    case 4:
        printf("bon muoi");
        break;
    case 5:
        printf("nam muoi");
        break;
    case 6:
        printf("sau muoi");
        break;
    case 7:
        printf("bay muoi");
        break;
    case 8:
        printf("tam muoi");
        break;
    case 9:
        printf("chin muoi");
        break;
    }

    switch (donvi)
    {
    case 5:
        printf("lam");
        break;
    case 1:
        printf("mot");
        break;
    case 2:
        printf("hai");
        break;
    case 3:
        printf("ba");
        break;
    case 4:
        printf("bon");
        break;
    case 6:
        printf("sau ");
        break;
    case 7:
        printf("bay ");
        break;
    case 8:
        printf("tam");
        break;
    case 9:
        printf("chin");
        break;

    }
    return 0;

}











