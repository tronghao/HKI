#include <stdio.h>
#include <conio.h>

int tong(int n);

int main()
{
	int n;
	do
	{
		printf("nhap vao so nguyen duong: ");
		scanf("%d", &n);
	} while (n<=0);
	printf("tong cac so tu 1 den %d la %d", n, tong(n));

	getch();
	return 0;
}
int tong(int n)
{	
	int tong=0;
	for(int i=1; i<=n; i++)
	tong+=i;
	return tong;
}
