#include<stdio.h>
#include<stdlib.h>

void trungbinhcong(int *a, int n) {
int b, c, tong=0, dem=0;
    printf("Nhap so b va c la: ");
 scanf("%d%d", &b, &c);
 for (int i=0; i<n; i++) {
  if ((*(a+i))>=b && (*(a+i))<=c)
  {
  tong += *(a+i);
  dem++;
  }
 }
 printf("Trung binh cong cac phan tu trong khoang [%d][%d] la: %.2f", b, c, (float)tong/dem); 
}

int main() {
 int n;
 do{
 printf("Nhap so luong phan tu la: ");
 scanf("%d", &n);
 if (n<=0) printf("Ban phai nhap so duong");
 } while (n<=0);
 int *a=(int*)malloc(n*sizeof(int));
 for (int i=0; i<n; i++) {
  printf("Nhap ky tu mang a[%d] la: ", i);
  scanf("%d", a+i);
 }
 
 trungbinhcong(a,n);
 free(a);
}