#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

//giai giai thua voi gia tri n <= 33
int giai_thua(int n);
//ham tinh tong cac so tu nhien
int tong(int n);
//ham kiem tra so nguyen to
bool SNT(int n);
//ham tinh gia tri so hang thu n cua day fibonacii
int FBNCNUM(int stt);
//ham tim so lon nhat trong hai so
float MAX(float gia_tri1, float gia_tri2);


int main()
{
	//ham tim so lon nhat trong hai so
	float a,b;
	printf("da chuyen sang chuong trinh tim gia tri lon nhat trong hai so\n");
	printf("nhap vao hai gia tri can so sanh\n");
	scanf("%f %f", &a, &b);
	printf("so lon nhat la %.2f\n\n", MAX(a,b));
		
	//ham tinh gia tri so hang thu n cua day fibonacii
	int j;
	printf("da chuyen sang chuong trinh tinh gia tri so hang thu n cua day fibonacii\n");
	printf("nhap gia tri can kiem tra\n");
	scanf("%d", &j);
	printf("gia tri so hang thu %d la %d\n\n", j, FBNCNUM(j));
	

	//ham kiem tra so nguyen to
	int y;
	printf("da chuyen sang chuong trinh kiem tra so nguyen to\n");
	printf("nhap gia tri can kiem tra (ket qua 1: la so nguyen to nguoc lai 0: khong la so nguyen to)\n");
	scanf("%d", &y);
	printf("%d so nguyen to\n\n", SNT(y)); //1: la so nguyen to // 0: khong la so nguyen to
	
	//giai giai thua voi gia tri n <= 33
	int n;
	printf("da chuyen sang chuong trinh tinh giai thua\n");
	printf("nhap gia tri n!\n");
	scanf("%d", &n);
	printf("ket qua = %d\n\n", giai_thua(n));
	
	//tong cac so tu nhien
	int x;
	printf("da chuyen sang chuong trinh tinh tong cac so tu nhien\n");
	printf("nhap gia tri cuoi cung cua tong\n");
	scanf("%d", &x);
	printf("ket qua = %d\n\n", tong(x));
	
	getch();
	return 0;
}

//ham giai thua
int giai_thua(int n)
{
	int i=1, ket_qua=1;
	for(i; i<=n; i++)
	ket_qua *= i;
	return ket_qua;
}

//ham tinh tong cac so tu nhien
int tong(int n)
{
	int i=1, ket_qua=0;
	for(i; i<=n; i++)
	ket_qua += i;
	return ket_qua;
}

//ham kiem tra so nguyen to
bool SNT(int n)
{	int i=n;

	if (i==2 || i==3 || i==5 || i==7)
	return true;
	else	
		 if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
		return false;
		else return true;
}

//ham tinh gia tri so hang thu n cua day fibonacii
int FBNCNUM(int stt)
{
	int gia_tri;
	int i=0, j=0, k=1;
	if (i==stt) return 0;
	else if ((i+1)==stt) return 1;
	else
	for(i=2; i<=stt; i++)
		{
			gia_tri= j+k;
			
			j=k;
			k=gia_tri;

		}
	return gia_tri;
}

//ham tim so lon nhat trong hai so
float MAX(float gia_tri1, float gia_tri2)
{
	if (gia_tri1<gia_tri2)
	return gia_tri2;
	else return gia_tri1;
}
