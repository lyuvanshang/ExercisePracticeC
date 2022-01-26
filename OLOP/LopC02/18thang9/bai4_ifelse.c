//nhap 3 so, kirm tra no co phai la tam giac khong?????

int main()
{

    int a,b,c;

    printf("nhap a=");
    scanf("%d",&a);

    printf("nhap b=");
    scanf("%d",&b);

    printf("nhap c=");
    scanf("%d",&c);

    if(a-b<c&&a-c<b&&b-c<a){
        printf("a,b,c lap thanh duoc hinh tam giac");
    }
    else{
        printf("a,b,c khong the lap duoc hinh tam giac");
    }
    }

