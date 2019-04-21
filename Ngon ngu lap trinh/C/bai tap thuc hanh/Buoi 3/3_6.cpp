#include <stdio.h>
#include <conio.h>

int tich(int n);

int main()
{
	int n;
	do
	{
		printf("nhap vao so nguyen duong: ");
		scanf("%d", &n);
	} while (n<=0);
	printf("tich cac so tu 1 den %d la %d", n, tich(n));

	getch();
	return 0;
}
int tich(int n)
{	
	int tich=1;
	for(int i=1; i<=n; i++)
	tich*=i;
	return tich;
}
