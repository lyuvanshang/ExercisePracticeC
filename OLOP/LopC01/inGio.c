#include<stdio.h>
#include<math.h>
//bài này không yêu cầu quá chặt chẽ chỉ áp dụng số nhỏ chứ không đến mấy trăm nghìn giây thì là một bài toán khai báo khác.

int main()
{   int sum, s,p,h;
    scanf("%d",&sum);
    /*lấy giờ theo kiểu int không có dấu phẩy, vd
    3690 chia 3600 = 1 giờ
    1h=3600s*/
    h=sum/3600;

    /* lấy phần dư để tính số phút
    3690 chia cho 3600 dư 90s
    rồi lấy 90s chia 60s để ra số phút theo công thức của tính giờ (int) */
    s=sum%3600;
    p=s/60;

    //số giây còn lại thì theo công thức  lấy tổng trừ h*3600-p*60

    s=sum-3600*h-p*60;

    printf("%02d:%02d:%02d",h,p,s);



}
