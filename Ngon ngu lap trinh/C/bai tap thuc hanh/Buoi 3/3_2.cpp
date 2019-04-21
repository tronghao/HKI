#include <stdio.h>
#include <conio.h>

void PTBN(float a, float b);

int main()
{
	float a,b;
	printf("giai phuong trinh bat nhat mot an co dang ax+b=0\n");
	printf("nhap vao he so a: ");
	scanf("%f", &a);
	
	printf("nhap vao he so b: ");
	scanf("%f", &b);
	
	PTBN(a,b);
	getch();
	return 0;
}

void PTBN(float a, float b)
{	if (a!=0)
	printf("pt co 1 ng x = %f\n", -b/a);	
	else 
	if (b == 0)
	printf("ptvsn");
	else
	printf("ptvn");
}
