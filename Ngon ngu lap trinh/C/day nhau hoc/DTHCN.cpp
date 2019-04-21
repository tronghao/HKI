#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float DT(int x, int y);

int main()
{	

	float chieu_dai, chieu_rong, kq;
	printf("nhap vao chieu dai va chieu rong cua hinh chu nhat\n");
	scanf("%f %f", &chieu_dai, &chieu_rong);
	kq = DT(chieu_dai, chieu_rong);
	printf("Dien tich hcn la %.2f", kq);
	/* hoac co the lam gon hon bo dong 12 va 13
	printf("Dien tich hcn la %.2f", DT(chieu_dai, chieu_rong));*/
	return 0;
}

//ham tinh dien tich
float DT(int x, int y)
{
	int DTHCN;
	DTHCN = x * y;
	return DTHCN;
}
