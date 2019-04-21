#include <stdio.h>
#include <conio.h>

typedef struct dssv
{
	char hoten[30];
	float toan;
	float ly;
	float hoa;
};

int main()
{
	int n;
	do{
		printf("nhap so luong sinh vien: ");
		scanf("%d", &n);
	}while(n<=0);
	dssv sv[1000];
	for(int i=0; i<n; i++)
	{
		printf("\nHo Ten sv%d: ", i+1); fflush(stdin); gets(sv[i].hoten);
		printf("Diem toan: "); scanf("%f", &sv[i].toan);
		printf("Diem ly: "); scanf("%f", &sv[i].ly);
		printf("Diem hoa: "); scanf("%f", &sv[i].hoa);
	}
	printf("\n--------------------------------------------");
	printf("\nthong tin sinh vien vua nhap:\n");
	for(int i=0; i<n; i++)
	{
		printf("\n");
		puts(sv[i].hoten);
		printf("Diem toan la: %.2f\n", sv[i].toan);  
		printf("Diem ly la: %.2f\n", sv[i].ly); 
		printf("Diem hoa la: %.2f\n", sv[i].hoa);
	}

	getch();
	return 0;
}