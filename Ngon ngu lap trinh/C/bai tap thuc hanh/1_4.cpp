#include <stdio.h>
#include <conio.h>
#define PI 3.1415

int main()
{
	float ban_kinh;
	printf("nhap vao ban kinh R cua hinh tron\n");
	lamlai:
	scanf("%f", &ban_kinh);
	if(ban_kinh <0)
	{
		printf("ban nhap sai moi ban nhap lai\n");
		goto lamlai;
	}
	printf("dien tich hinh tron la %f va chu vi hinh tron la %f", PI*(ban_kinh*ban_kinh), 2*PI*ban_kinh);

	getch();
	return 0;
}
