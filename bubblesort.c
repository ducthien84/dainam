#include "stdio.h"

void DoiCho(int b[], int trai, int phai)
{
    int temp;
    temp = b[trai];
    b[trai] = b[phai];
    b[phai] = temp;
}

void main()
{
    int a[6] = { 15, 14, 20, 9, 8, 6};// --> {6, 8, 9, 14, 15, 20}
    int i, j, temp;

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(a[j]<a[i])
            {                
                //Đổi chỗ
                DoiCho(a,j,i);
                /*
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                */
            }
        }
    }

    for(i=0;i<6;i++)
    {
        printf("%d,", a[i]);
    }
}

