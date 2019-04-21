#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float so1, so2, so3, max, min;
	printf("nhap vao ba so thuc a, b, c\n");
	scanf("%f %f %f", &so1, &so2, &so3);
	float p = (so1+so2+so3)/2;
	float s = sqrt(p*(p-so1)*(p-so2)*(p-so3));
	if(so1+so2 > so3 && so1+so3 > so2 && so2+so3 > so1)
	{
		printf("day la ba canh cua mot tam giac\n");
		printf("dien tich tam giac S = %f\n", s);
		printf("duong cao ha = %f\t\tduong cao hb = %f\t\tduong cao hc = %f", 2*s/so1, 2*s/so2,2*s/so3);

	}
	else
		printf("day khong phai la ba canh cua mot tam giac");
	

	getch();
	return 0;
}
