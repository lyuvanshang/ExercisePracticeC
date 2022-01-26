#include<stdio.h>



int main()
{
    int nam,theky;
    printf("nhap nam");
    scanf("%d",&nam);

    if (nam%100==0)
    {
      theky=nam/100;

}
 else {
    theky =(int)nam/100;
    theky=theky+1;
 }
    printf("%d thuoc the ky: %d",nam,theky);
    return 0;
}
