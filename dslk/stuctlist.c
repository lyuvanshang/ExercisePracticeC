#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct SinhVien
{
    char hoTen[25];
    char lop[10];
    int namSinh;
    float diemTK;
};

typedef struct SinhVien SinhVien;

typedef struct node
{
    SinhVien data;
    struct node* next;
} node;

//tao danh sach
node*first =NULL;
node* last= NULL;

//nhap du lieu
SinhVien nhapDataSinhVien ()
{
    SinhVien sv ;
    printf(" Nhap ho ten: ");
    fflush(stdin);
    gets(sv.hoTen);

    printf(" Nhap Lop:");
    fflush(stdin);
    gets(sv.lop);

    printf("Nhap nam sinh:");
    scanf("%d",&sv.namSinh);

    printf("Nhap diem tong ket:");
    scanf("%f", &sv.diemTK);

    return sv;
}
//Tao node
node* taoNode ()
{
    //cap phat
    node*pnode =(node*)malloc(sizeof(node));

    //nhap data
    pnode->data = nhapDataSinhVien();

    //tro next
    pnode->next = NULL;

    return pnode;
}
void themNodeVaoDau()
{
    //Tao node
    node*pnode = taoNode();
    //neu danh sach chua co gi thi
    if ( first==NULL)
    {
        first = last= pnode;
    }
    //neu co danh sach
    else
    {
        pnode->next = first;
        first= pnode;
    }

}
//them node vao vi tri cuoi
void themNodeVaoCuoi (node*pnode)
{
    //neu danh sach rong
    if (first==NULL)
    {
        first = last = pnode;
    }
    //neu cos danh sach
    else
    {
        last->next=pnode;
        last = pnode;
    }
}

void hienThiDanhSach (SinhVien sv)
{
    printf("%-25s%10s%10d%8.5f\n", sv.hoTen,sv.lop,sv.namSinh,sv.diemTK);
}
void hienThiDanhSachSinhVien ()
{
    if (first==NULL)
    {
        printf("\tDanh sach rong\n");
        return;
    }

    node*i = NULL;
    int stt;
    printf("\t\tDanh sach\n");
    printf("%-5s%-25s%10s%10s%8s\n", "STT","HO TEN", "LOP","NAM SINH", "DIEM TONG KET");

    for ( stt= 1, i=first; i!=NULL; i=i->next)
    {
        printf("%-5d",stt++);
        hienThiDanhSach(i->data);

    }
}
//tim kiem sinh vien

node*timKiemSinhVien (char tenCanTim[])
{
    node*i= NULL;
    for (i=first; i!=NULL; i=i->next)
    {
        if (strcmp(i->data.hoTen,tenCanTim)==0)
        {
            return i;
        }
        return NULL;
    }
}


void suaSinhVien (char tenCanTim[])
{
    //tim kiem sinh vien
    node*i=timKiemSinhVien(tenCanTim);
    if (i==NULL)
    {
        printf("Khong co sinh vien do.");
        return;
    }
    //yeu cau nhap lai
    printf("Sua data sinh vien %s\n",tenCanTim);
    i->data = nhapDataSinhVien();

}
void xoaSinhVien (char tenCanTim[])
{
    //tim sinh vien
    node*i = timKiemSinhVien(tenCanTim);
    if (i==NULL)
    {
        printf("Khong co sinh vien nhe");
        return;
    }
    //xoa node*i
    //truowfng hop danh sach con mot phan tu
    if (i==first&&last==first)
    {
        first=last=NULL;
        free(i);
        return;
    }
    //xoa phan tu dau tien
    if (i==first)
    {
        first=first->next;;
        free(i);
        return;
    }
    // xoa phan tu cuoi
    if (i==last)
    {
        node* tmp=NULL;
        for (tmp=first; tmp->next!=i; tmp=tmp->next);
        last = tmp;
        last->next = NULL;
        free(i);
        return;
    }
    //xoa phan tu o giua
    node* tmp = NULL;
    for (tmp=first; tmp->next!=i; tmp=tmp->next);
    tmp->next = i->next;
    free(i);
}
void sapXepSinhVien()
{
    //sapXepTheoTen
    node*i = NULL;
    node*j = NULL;

    if (first==NULL)
        return;

    for ( i= first; i->next!=NULL; i=i->next)
        for ( j=i->next; j!=NULL; j=j->next)
        {
            {
                if (strcmp(i->data.hoTen,j->data.hoTen)>0);
                {
                    SinhVien tmp = i->data;
                    i->data = j->data;
                    j->data= tmp;
                }
            }
        }
}
void Menu()
{
    printf("\tMENU\n");
    printf("\t-------------------------------------------------------------\t");
    printf("\t1: Nhap danh sach sinh vien.");
    printf("\t2: Hien thi danh sach sinh vien.");
    printf("\t3: Chen them sinh vien.");
    printf("\t4: Xoa sinh vien.");
    printf("\t5: Sua mot sinh vien.");
    printf("\t6: Sap xep sinh vien theo ten.");
    printf("\t7: Ket thuc.");
    printf("\t---------------------------------------------------------------\t");

}


int main()
{
    int chonso;
    char tmp;
    node*pnode = NULL;
    char tenCanTim[25];
    while (1)
    {
        Menu();
        scanf("%d",&chonso);

        switch (chonso)
        {
        case 1:
            //da co danh sach
           if (first!=NULL)
            {
                first=NULL;
            }
            while (1)
            {
                node*pnode = taoNode();
                themNodeVaoCuoi(pnode);
                printf("Ban co muon nhap tiep khong ?");
                fflush(stdin);
                tmp=getchar();
                if (tmp=='n'||tmp=='N')
                    break;
            }
            printf("Ban da nhap xong");
            break;

        case 2:
            hienThiDanhSachSinhVien();
            break;
             case 3:
            {
                SinhVien them;
                printf("\nNhap thong tin sinh vien can them:");
                nhapDataSinhVien(them);
                node*i= taoNode(them);
                themNodeVaoCuoi(them);
                sapXepSinhVien();

            }

        }

    }
}
