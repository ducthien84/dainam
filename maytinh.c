//May tinh casio don gian 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
char c[100];
void huongdan();
int main(){
	while (1)
	{
	system("cls");
	float a,b;
    printf("\nNhap 0 de xem huong dan su dung\nNhap vao chuc nang can thuc hien: ");
	fgets(c,sizeof(c),stdin);
	printf("\nNhap vao 2 so a va b: ");
	scanf("%f%f",&a,&b);
	float result=0;
	switch(*c)
	{
		case '0':huongdan();break;
		case '+':printf("\nKet qua cua phep tinh la: %.3f\n",a+b);break;
		case '-':printf("\nKet qua cua phep tinh la: %.3f\n",a-b);break;
		case '*':printf("\nKet qua cua phep tinh la: %.3f\n",a*b);break;
		case '/':printf("\nKet qua cua phep tinh la: %.3f\n",a/b);break;
		case 'sqrt_a':printf("\nKet qua cua phep tinh la: %.3f\n",sqrt(a));break;
		default:printf("Vui long nhap phep toan hop le!");
	}
    system("pause");
	}
}
void huongdan()
{
	system("cls");
	printf("0:Xem huong dan su dung\n+:Phep cong\n-:Phep tru\n*:Phep nhan\n/:Phep chia\n");
	system("pause");
}