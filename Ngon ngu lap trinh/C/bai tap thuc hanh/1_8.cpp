#include <stdio.h>
#include <conio.h>

int main()
{
	int so;
	printf("nhap vao so nguyen tu 1 den 7\n");
	lamlai:
	scanf("%d",&so);
	switch (so)
	{
		case 1: printf("ngay nghi"); break;
		case 2: printf("lam viec ca ngay"); break;
		case 3: printf("lam viec ca ngay"); break;
		case 4:	printf("lam viec ca ngay"); break;
		case 5:	printf("lam viec ca ngay"); break;
		case 6:	printf("lam viec ca ngay"); break;
		case 7:	printf("lam viec buoi sang"); break;
		default: printf("ban nhap sai moi ban nhap lai\n"); goto lamlai;
	}
	getch();
	return 0;
}
