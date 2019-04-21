#include <stdio.h>
#include <conio.h>
#include <math.h>

void PTBH(float a, float b, float c);

int main()
{
	float a, b, c;
	printf("chuong trinh giai phuong tirnh bac hai ax^2 + bx + c =0\n");
	printf("nhap vao he so a: ");
	scanf("%f", &a);
	printf("nhap vao he so b: ");
	scanf("%f", &b);
	printf("nhap vao he so c: ");
	scanf("%f", &c);
	PTBH(a,b,c);
	getch();
	return 0;
}

void PTBH(float a, float b, float c)
{
	float delta = pow(b,2)-(4*a*c);
	if(delta >0) printf("phuong trinh co hai nghiem phan biet\n x1 = %f\n x2 = %f", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
	else if(delta == 0) printf("phuong trinh co nghiem kep x = %f", -b/(2*a));
	else printf("phuong trinh vo nghiem");
}
