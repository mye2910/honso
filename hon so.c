#include<stdio.h>
#include<conio.h>


struct HonSo
{
    int TuSo, MauSo, SoNguyen;
};

typedef struct HonSo HONSO;

void NhapHonSo(HONSO &);
void XuatHonSo(HONSO);

void NhapHonSo(HONSO &ps)
{
	printf("\nNhap vao so nguyen: ");
	scanf("%d", &ps.SoNguyen);
    printf("\nNhap vao tu so: ");
    scanf("%d", &ps.TuSo);

    do
    {
        printf("\nNhap vao mau so: ");
        scanf("%d", &ps.MauSo);

        if(ps.MauSo == 0)
        {
            printf("\nMau so phai khac 0. Xin kiem tra lai !");
        }
    }while(ps.MauSo == 0);
}

void XuatHonSo(HONSO ps)
{
    printf("%d*(%d/%d)", ps.TuSo, ps.MauSo, ps.SoNguyen);
}
int main()
{
    HONSO ps;
    NhapHonSo(ps);
    XuatHonSo(ps);

    

    getch();
    return 0;
}