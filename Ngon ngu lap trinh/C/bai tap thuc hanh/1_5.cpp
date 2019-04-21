#include <stdio.h>
#include <conio.h>

int main()
{
	int so1, so2, so3, max, min;
	printf("nhap vao ba so nguyen\n");
	scanf("%d %d %d", &so1, &so2, &so3);
	if(so1<=so2)
	{
		max=so2;
		min=so1;
	}
	else
	{
		max=so1;
		min=so2;
	}
	if(max <= so3)	max=so3;
	if(min >= so3)	min=so3;
	printf("so lon nhat la %d va so nho nhat la %d", max, min);

	getch();
	return 0;
}
