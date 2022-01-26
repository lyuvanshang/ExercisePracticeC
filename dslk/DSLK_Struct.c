#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct SinhVien
{
    char hoTen[25];
    char lop[10];
    int namSinh;
    float diemTK;
}Data;


typedef struct node {
    Data data;
    struct node* next;
} node;

node* first = NULL;

Data themDataNode ()
{
    Data a;

    printf("Nhap ho ten: ");
    fflush(stdin);
    gets(a.hoTen);

    printf("Lop: ");
    fflush(stdin);
    gets(a.lop);

    printf("Nam sinh: ");
    scanf("%d",&a.namSinh);

    printf("Diem tong ket: ");
    scanf("%f",&a.diemTK);

    return a;
}

node* taoNode ()
{

    //Cap phat dong
    node* pnode = (node*)malloc(sizeof (node));

    //Cap gia tri
    pnode->data = themDataNode();

    //Tro vao phan tu tiep theo
    pnode->next = NULL;

    return pnode;
}

void themNodeODau ()
{
    //Tao node
    node* pnode = taoNode();

    //Truong hop danh sach chua co gi
    if (first==NULL)
        first = pnode;

    //Truong hop danh sach da co cac phan tu
    else
    {
        pnode->next = first;
        first = pnode;
    }
}

void themNodeOCuoi()
{
    //Tao node
    node* pnode = taoNode();

    //Truong hop danh sach chua co gi
    if (first==NULL)
        first = pnode;

    //Truong hop danh sach da co cac phan tu
    else
    {
        //Tim phan tu cuoi
        node* tmp;
        for (tmp=first; tmp->next!=NULL; tmp=tmp->next);

        tmp->next = pnode;
    }
}

void hienThiSinhVien (Data sv)
{
    printf("%-25s%10s%10d%8.2f\n",sv.hoTen,sv.lop,sv.namSinh,sv.diemTK);
}

void hienThiDanhSach()
{
    if (first==NULL)
    {
        printf("Danh sach rong\n");
        return;
    }

    node* i;
    int stt;
    printf("\t\tDANH SACH\n");
    printf("%-5s%-25s%10s%10s%8s\n","STT","HO TEN","LOP","NAM SINH","DIEM TK");

    for (stt=1,i=first; i!=NULL; i=i->next)
    {
        printf("%-5d",stt++);
        hienThiSinhVien(i->data);
    }
    printf("\n");
}

//Tim kiem 1 phan tu co thuoc tinh hoTen
//Gia ve dia chi node day neu ton tai
//Neu khong ton tai, gia ve NULL
node* timDataTrongDanhSach (char hoTen[])
{
    node* i;
    for (i=first; i!=NULL;i=i->next)
        if (strcmp(hoTen,i->data.hoTen)==0)
            break;
    return i;
}

void suaDataTrongDanhSach (char hoTen[])
{
    node* pnode = timDataTrongDanhSach(hoTen);
    if (pnode==NULL)
        printf("Khong co sinh vien %s trong danh sach\n",hoTen);
    else
    {
        printf("Da tim thay sinh vien %s, vui long sua\n",hoTen);
        pnode->data = themDataNode();
    }
}

void sapXepDanhSachTheoDiemTangDan()
{
    node* i;
    node* j;
    if (first==NULL)
        return;

    for (i=first; i->next!=NULL; i=i->next)
    {
        for (j=i->next;j!=NULL; j=j->next)
        {
            if (j->data.diemTK < i->data.diemTK)
            {
                Data tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
        }
    }
}

void sapXepDanhSachTheoTenTangDan()
{
    node* i;
    node* j;
    if (first==NULL)
        return;

    for (i=first; i->next!=NULL; i=i->next)
    {
        for (j=i->next;j!=NULL; j=j->next)
        {
            if (strcmp(j->data.hoTen,i->data.hoTen)<0)
            {
                Data tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
        }
    }
}

void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Nhap danh sach sinh vien\n");
    printf("\t2. In danh sach sinh vien\n");
    printf("\t3. Tim kiem sinh vien theo ten\n");
    printf("\t4. Sua sinh vien theo ten\n");
    printf("\t5. Sap xep sinh vien theo diem\n");
    printf("\t6. Sap xep sinh vien theo ten\n");
    printf("\t0. Exit\n");
    printf("\t-------------------------\n");
    printf("\t\tVui long chon: ");
}

int main()
{
    int chon;
    int n = 0;
    char hoTen[25];
    node* pnode = NULL;
    while (1)
    {
        //In menu
        menu();

        //Chon option
        scanf("%d",&chon);

        //Thuc hien option
        switch(chon)
        {
            case 1:
                //Neu da co danh sach sinh vien
                if (n>0)
                {
                    //Xoa danh sach cu
                    first = NULL;
                }

                //Chua co dssv
                //Nhap so luong sinh vien
                printf("Nhap so luong sinh vien: ");
                scanf("%d",&n);

                //Nhap tung sinh vien mot
                for (int i=0; i<n; i++)
                {
                    printf("Nhap sinh vien thu %d\n",i+1);
                    themNodeOCuoi();
                }


                printf("\tBan da nhap xong danh sach sinh vien\n");

                break;
            case 2:
                hienThiDanhSach();
                break;
            case 3:
                if (first==NULL)
                {
                    printf("\tVui long nhap danh sach\n");
                    break;
                }
                printf("Nhap ten can tim kiem: ");
                fflush(stdin);
                gets(hoTen);
                pnode = timDataTrongDanhSach(hoTen);
                if (pnode==NULL)
                    printf("Khong ton tai sinh vien %s\n",hoTen);
                else
                {
                    printf("Thong tin sinh vien %s\n",hoTen);
                    hienThiSinhVien(pnode->data);
                }
                break;
            case 4:
                if (first==NULL)
                {
                    printf("\tVui long nhap danh sach\n");
                    break;
                }
                printf("Nhap ten can tim kiem: ");
                fflush(stdin);
                gets(hoTen);
                pnode = timDataTrongDanhSach(hoTen);
                if (pnode==NULL)
                    printf("Khong ton tai sinh vien %s\n",hoTen);
                else
                {
                    printf("Nhap thong tin de sua sinh vien %s\n",hoTen);
                    pnode->data = themDataNode();
                }
                break;
            case 5:
                if (first==NULL)
                {
                    printf("\tVui long nhap danh sach\n");
                    break;
                }
                sapXepDanhSachTheoDiemTangDan();
                break;
            case 6:
                if (first==NULL)
                {
                    printf("\tVui long nhap danh sach\n");
                    break;
                }
                sapXepDanhSachTheoTenTangDan();
                break;
            case 0:
                exit(0);
            default:
                printf("Vui long nhap tu 0-6\n");

        }

        printf("Bam phim bat ky de ve menu\n");
        getch();
        system("cls");
    }
    return 0;
}
