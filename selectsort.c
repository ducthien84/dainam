#include "stdio.h"

void main()
{
    int a[6] = { 15, 14, 20, 9, 8, 6};// --> {6, 8, 9, 14, 15, 20}
    int i, j, vitrimin, temp;

    for(i=0;i<5;i++)
    {
        vitrimin = i;
        for(j=i+1;j<6;j++)
        {
            if(a[j]<a[vitrimin])
            {                
                //Đổi chỗ
                temp=a[j];
                a[j]=a[vitrimin];
                a[vitrimin]=temp;
                //ghi nhận lại vị trí nhỏ nhất
                vitrimin=j;
            }
        }
    }

    for(i=0;i<6;i++)
    {
        printf("%d,", a[i]);
    }
}

