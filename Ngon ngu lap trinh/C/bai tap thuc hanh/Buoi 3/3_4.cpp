#include <stdio.h>
#include <conio.h>

int SNT(int n);
int kt_so_hoan_hao(int n);

int main()
{
	int n;
	do
	{
		printf("nhap vao so nguyen duong: ");
		scanf("%d", &n);
	} while (n<=0);
	if (kt_so_hoan_hao(n) == 1) printf("day la so hoan hao");
	else printf("day khong phai la so hoan hao");

	getch();
	return 0;
}

int SNT(int n)
{
	int SNT=0;
	for(int i=1; i<n; i++)
	if(n % i ==0) SNT += i;
	return SNT;
}
int kt_so_hoan_hao(int n)
{
	if (n == SNT(n)) return 1;
	else return 0;
}
